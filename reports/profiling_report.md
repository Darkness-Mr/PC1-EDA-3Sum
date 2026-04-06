# Reporte de Profiling (gprof)

**Intento de ejecución:**
Se intentó compilar el programa principal con la bandera de profiling `-pg` siguiendo las instrucciones:
`g++ -std=c++17 -I src -pg src/main.cpp src/solution.cpp -o main_prof`

**Limitación del Sistema Operativo:**
El entorno de desarrollo utilizado (macOS) arrojó el siguiente error del compilador nativo:
`clang++: error: the clang compiler does not support -pg option on versions of OS X 10.9 and later`

Dado que Apple (`clang`) ha deprecado el soporte nativo para `gprof`, no fue posible generar el archivo `gmon.out`. Para compensar esta limitación y cumplir con el análisis de rendimiento esperado, hemos desarrollado un experimento de medición de tiempos detallado utilizando la librería `<chrono>` de C++ en nuestro archivo de Benchmark, comparando el impacto real entre nuestra solución $O(n^2)$ y la ingenua $O(n^3)$.