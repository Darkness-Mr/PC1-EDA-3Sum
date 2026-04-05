# Práctica Calificada 1 - CC232 (Estructuras de Datos y Algoritmos)

## 👥 Integrantes
* Marco Antonio Huamani Bonifacio
* [Nombre de tu compañero] (Encargado de la configuración CMake y tests)

## 🎯 El Problema: 15. 3Sum
* **Enlace:** [LeetCode 15: 3Sum](https://leetcode.com/problems/3sum/description/)
* **Descripción:** Dado un arreglo de enteros `nums`, devolver todos los tripletes `[nums[i], nums[j], nums[k]]` tales que `i != j`, `i != k`, y `j != k`, y que la suma de los tres sea exactamente `0`.
* **Complejidad Objetivo:** Debemos optimizar la fuerza bruta de $O(n^3)$ a $O(n^2)$ usando la técnica de ordenamiento + dos punteros.

---

## 🏗️ Estado Actual del Proyecto (Avance de Marco)

Hasta el momento, se ha configurado la estructura de carpetas exigida por la rúbrica y se han creado los archivos base en la carpeta `src/`. No hemos implementado la lógica todavía, solo los "contratos" (esqueletos) para que el código pueda compilar:

1. **`src/solution.hpp`:** * Contiene la declaración de la clase `Solution`.
   * Declaramos dos funciones: `threeSum` (para nuestra solución óptima $O(n^2)$) y `threeSumBruteForce` (para comparar en el benchmark con $O(n^3)$).
   * Se usó paso por referencia (`std::vector<int>&`) para evitar copias innecesarias en memoria.

2. **`src/solution.cpp`:**
   * Es la implementación de la clase. Por ahora, las funciones están declaradas pero vacías (retornan un arreglo vacío para no generar errores de compilación). 
   * Ya está importada la librería `<algorithm>` que usaremos luego para ordenar el vector.

3. **`src/main.cpp`:**
   * Es nuestro punto de entrada. 
   * Instancia la clase `Solution` y define el vector de prueba clásico del problema: `{-1, 0, 1, 2, -1, -4}`.

---

## 🚀 Próximos Pasos (Para [Nombre de tu Compañero])

Ahora es tu turno. Para seguir el ciclo de desarrollo ordenado, esto es lo que debemos hacer a continuación:

1. **Configurar CMake:** Crear el archivo `CMakeLists.txt` en la raíz para automatizar la compilación de los archivos de la carpeta `src/`.
2. **Implementar Fuerza Bruta:** Escribir los 3 bucles anidados en la función `threeSumBruteForce` dentro de `solution.cpp`.
3. **Escribir Pruebas Base:** Configurar `tests/tests.cpp` para probar que nuestra fuerza bruta funciona usando aserciones (patrón Arrange-Act-Assert).

---

## 📋 Secciones Pendientes (Requerimientos de la Rúbrica)
*(Nota: Llenaremos estas secciones al finalizar el proyecto)*

### 1. Justificación del Algoritmo
* **Correctitud e Invariante de Progreso:** [Explicar aquí el invariante del bucle]
* **Análisis de Complejidad Temporal:** [Explicar por qué es $O(n^2)$]
* **Análisis de Complejidad Espacial:** [Explicar la memoria extra usada]

### 2. Reporte de Benchmark y Sanitización
* **Resultados de Banderas (-O0, -Og, -O2, -Os):** [Resumen breve]
* **Memoria (ASan/UBSan):** [Confirmar que no hay fugas de memoria]

### 3. Uso de Inteligencia Artificial (Copilot)
* [Declarar aquí qué sugerencias de Copilot se aceptaron y por qué]