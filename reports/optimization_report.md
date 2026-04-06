### Reporte de Benchmark y Sanitización
* **Resultados de Compilación (-O0, -Og, -O2, -Os):**

* Compilamos cada version de optimización:
* para -O0:
g++ -std=c++17 -O0 src/main.cpp src/solution.cpp -o main_O0
* para -Og:
g++ -std=c++17 -Og src/main.cpp src/solution.cpp -o main_Og
* para -O2:
g++ -std=c++17 -O2 src/main.cpp src/solution.cpp -o main_O2
* para -Os:
g++ -std=c++17 -Os src/main.cpp src/solution.cpp -o main_Os

Ahora ejecutando los archivos tenemos:
* Ejecución de time ./main_O0:

===============
Ejecutando 3Sum
===============

Resultado threeSumBrute:
[-1, 0, 1]
[-1, -1, 2]

Resultado threeSum:
[-1, -1, 2]
[-1, 0, 1]

./main_O0  0,00s user 0,00s system 1% cpu 0,309 total


* Ejecución de time ./main_Og:
===============
Ejecutando 3Sum
===============

Resultado threeSumBrute:
[-1, 0, 1]
[-1, -1, 2]

Resultado threeSum:
[-1, -1, 2]
[-1, 0, 1]

./main_Og  0,00s user 0,00s system 1% cpu 0,284 total