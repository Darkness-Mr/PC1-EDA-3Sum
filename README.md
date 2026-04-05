# Práctica Calificada 1 - CC232 (Estructuras de Datos y Algoritmos)

## 👥 Equipo de Trabajo
* Marco Antonio Huamani Bonifacio (20232741D)
* Yaimar Alexis Cabello Quevedo (20244712D)

## El Problema: 15. 3Sum
* **Enlace:** [LeetCode 15: 3Sum](https://leetcode.com/problems/3sum/description/)
* **Enunciado:** Dado un arreglo de números enteros `nums`, debemos encontrar y devolver todos los tripletes `[nums[i], nums[j], nums[k]]` únicos (donde los índices `i`, `j` y `k` son distintos entre sí) cuya suma sea exactamente igual a `0`.
* **Nuestro Objetivo:** Llevar la solución inicial bruta, que tiene un costo computacional de $O(n^3)$, hacia una solución óptima de $O(n^2)$ aplicando la técnica de ordenamiento combinada con dos punteros.

## Estado Actual del Proyecto (Avance de Marco)

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

## Lo que puedes ir avanzando Yaimar

1. **Implementar la Fuerza Bruta:** Escribe la lógica inicial de los 3 bucles anidados dentro de la función `threeSumBrute` en el archivo `solution.cpp`.
3. **Escribir las Pruebas Base:** Configura el archivo `tests/tests.cpp` para validar que nuestro enfoque de feurza bruta arroja los resultados correctos. Recuerda aplicar el patrón AAA (Arrange-Act-Assert) para mantener el orden.

## 📋 Secciones Pendientes (Requerimientos de la Rúbrica)
*(Nota: Iremos completando estas secciones conforme avancemos con el proyecto)*

### 1. Justificación del Algoritmo
* **Correctitud e Invariante de Progreso:** [Explicar aquí el invariante del bucle].
* **Análisis de Complejidad Temporal:** [Explicar detalladamente por qué logramos $O(n^2)$].
* **Análisis de Complejidad Espacial:** [Detallar si utilizamos memoria extra y por qué].

### 2. Reporte de Benchmark y Sanitización
* **Resultados de Compilación (-O0, -Og, -O2, -Os):** [Resumen breve de los tiempos y rendimiento].
* **Revisión de Memoria (ASan/UBSan):** [Confirmar la ausencia de fugas de memoria o comportamientos indefinidos].

### 3. Uso de Inteligencia Artificial (Copilot)
* [Declarar aquí qué sugerencias de código brindadas por Copilot aceptamos, cuáles rechazamos y nuestros motivos].