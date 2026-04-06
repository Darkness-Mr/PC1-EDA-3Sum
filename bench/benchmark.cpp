#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include "solution.hpp"

int main() {
    std::cout << "--- Iniciando Benchmark de 3Sum ---\n";
    Solution s;

    // Generar un arreglo de 500 números aleatorios
    int n = 500;
    std::vector<int> nums(n);
    std::mt19937 generador(42); // Semilla fija para determinismo
    std::uniform_int_distribution<int> distribucion(-100, 100);

    for (int i = 0; i < n; ++i) {
        nums[i] = distribucion(generador);
    }

    std::cout << "Tamano de entrada (n) = " << n << " elementos.\n\n";

    // 1. Medir Fuerza Bruta O(n^3)
    auto inicioB = std::chrono::high_resolution_clock::now();
    s.threeSumBrute(nums);
    auto finB = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> tiempoB = finB - inicioB;
    std::cout << "Tiempo Fuerza Bruta O(n^3): " << tiempoB.count() << " ms\n";

    // 2. Medir Solución Óptima O(n^2)
    auto inicioO = std::chrono::high_resolution_clock::now();
    s.threeSum(nums);
    auto finO = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> tiempoO = finO - inicioO;
    std::cout << "Tiempo Solucion Optima O(n^2): " << tiempoO.count() << " ms\n";

    std::cout << "\nMejora de rendimiento: La solucion optima es " 
              << tiempoB.count() / tiempoO.count() << " veces mas rapida.\n";

    return 0;
}