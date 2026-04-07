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

* Ejecución de time ./main_O2:
===============
Ejecutando 3Sum
===============

Resultado threeSumBrute:
[-1, 0, 1]
[-1, -1, 2]

Resultado threeSum:
[-1, -1, 2]
[-1, 0, 1]

./main_O2  0,00s user 0,00s system 2% cpu 0,292 total

* Ejecución de time ./main_Os:
===============
Ejecutando 3Sum
===============

Resultado threeSumBrute:
[-1, 0, 1]
[-1, -1, 2]

Resultado threeSum:
[-1, -1, 2]
[-1, 0, 1]

./main_Os  0,00s user 0,00s system 1% cpu 0,286 total

* Ejecutando el Benchmark
Ejecuto: g++ -std=c++17 -I src -O2 bench/benchmark.cpp src/solution.cpp -o bench_run

con ello obtenemos bench_run y lo ejecutamos con: ./bench_run y finalmente tenemos 

--- Iniciando Benchmark de 3Sum ---
Tamano de entrada (n) = 500 elementos.

Tiempo Fuerza Bruta O(n^3): 439.264 ms
Tiempo Solucion Optima O(n^2): 0.44732 ms

Mejora de rendimiento: La solucion optima es 981.99 veces mas rapida.