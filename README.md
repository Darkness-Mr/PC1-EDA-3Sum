# Práctica Calificada 1 - CC232 (Estructuras de Datos y Algoritmos)

## 👥 Equipo de Trabajo

* Marco Antonio Huamani Bonifacio (20232741D)
* Yaimar Alexis Cabello Quevedo (20244712D)

## El Problema: 14. 3Sum

* **Enlace:** [LeetCode 15: 3Sum](https://leetcode.com/problems/3sum/description/)
* **Enunciado:** Dado un arreglo de números enteros `nums`, debemos encontrar y devolver todos los tripletes `[nums[i], nums[j], nums[k]]` únicos (donde los índices `i`, `j` y `k` son distintos entre sí) cuya suma sea exactamente igual a `0`.
* **Nuestro Objetivo:** Llevar la solución inicial bruta, que tiene un costo computacional de $O(n^3)$, hacia una solución óptima de $O(n^2)$ aplicando la técnica de ordenamiento combinada con dos punteros.

## Estado Actual del Proyecto

Hasta ahora, he configurado la estructura de carpetas que pide la rúbrica y he dejado listos los archivos en `src/`. Todavía no he implementado la lógica del algoritmo; solo deje listos los (esqueletos) para asegurar que el proyecto compile sin problemas desde el inicio:

1. **`src/solution.hpp`:** * Aquí definí la declaración de la clase `Solution`.
   * Dejé declaradas las dos funciones principales: `threeSum` (donde irá nuestra solución óptima de $O(n^2)$) y `threeSumBrute` (que usaremos más adelante en el benchmark para comparar con el enfoque $O(n^3)$).
   * Para ambas funciones use el paso por referencia (`std::vector<int>&`) para evitar copias innecesarias.

2. **`src/solution.cpp`:**
   * Contiene la implementación de la clase. Por el momento, las funciones están declaradas pero vacías (solo retornan un arreglo vacío para evitar errores de compilación).
   * También dejé importada la librería `<algorithm>`, la cual necesitaremos más adelante para ordenar nuestro arreglo.

3. **`src/main.cpp`:**
   * Nuestro archivo a ejecutar.
   * Instancia la clase `Solution` y deja preparado el vector de prueba clásico de este problema en LeetCode: `{-1, 0, 1, 2, -1, -4}`.

### 1. Justificación del Algoritmo

#### Correctitud e Invariante de Progreso

El invariante del bucle principal asegura que al finalizar cada iteración de `i`, todos los tripletes únicos que tienen `nums[i]` como el elemento más pequeño ya han sido encontrados y añadidos al resultado. Esto evita procesar el mismo triplete múltiples veces.

Dentro del bucle de dos punteros (`izquierda` y `derecha`), el invariante garantiza que para cada `i` fijo, se exploran todas las parejas posibles que suman `-nums[i]`, moviendo `izquierda` hacia la derecha si la suma es pequeña, y `derecha` hacia la izquierda si es grande. Se saltan duplicados para mantener unicidad, asegurando que no se omitan tripletes válidos ni se repitan.

#### Análisis de Complejidad Temporal

-Ordenar el arreglo: $O(n \log n)$.
-Bucle principal de `i` (de 0 a n-3): $O(n)$.
-Para cada `i`, bucle de dos punteros (`izquierda` a `derecha`): $O(n)$.
-Total: $O(n \log n + n^2) = O(n^2)$.

La versión bruta usa tres bucles anidados, resultando en $O(n^3)$.

#### Análisis de Complejidad Espacial

Usamos $O(1)$ espacio adicional, aparte del resultado. Solo empleamos variables temporales como `i`, `izquierda`, `derecha` y `obj` (unas pocas enteros). El arreglo se ordena in-place, sin copias ni estructuras auxiliares grandes. Si usáramos un set para evitar duplicados, sería $O(n)$, pero aquí evitamos eso con saltos de duplicados, manteniendo $O(1)$.

### 2. Reporte de Benchmark y Sanitización

* **Resultados de Compilación (-O0, -Og, -O2, -Os):**

* En resumen la variantes mas optimizada es la -02. Lo explico más detallado en reports/optimization_report.md
* **Revisión de Memoria (ASan/UBSan):**
* Compilamos correctamente nuestro programa con los sanitizeds correspondiente (ASan y UBSan) y al ejecutar todo fue exitoso ya que no detectamos fugas ni comportamiento indefinidos.

### 3. Uso de Inteligencia Artificial (Copilot)

* Se aceptaron sugerencias de Copilot para la implementación del CMakeLists.txt , correccion de faltas ortograficas en el README.md y correccion de errores logicos, como la declaración incorrecta en tests.cpp de resultadoB y resultadoO como bools en lugar de vectores, lo que provocaba errores de tipos. Se decidió aceptar estas propuestas en CMakeLists.txt para facilitar la compilación, en tests.cpp y main.cpp para corregir errores lógicos y en README.md para hacer un archivo de mejor lectura.

### 4. Instrucciones de Compilación y Ejecución

Para compilar y correr el proyecto usando CMake desde la terminal:

1. `mkdir build && cd build`
2. `cmake ..`
3. `make`
4. Ejecutar el programa principal: `./main`
5. Ejecutar las pruebas: `ctest --output-on-failure`.