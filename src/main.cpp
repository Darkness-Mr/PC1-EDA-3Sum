#include <iostream>
#include <vector>
#include "solution.hpp"

void imprimir(const std::vector<std::vector<int>>& triplets, const std::string& label) {
    std::cout << label << ":\n";
    for (int i = 0; i < triplets.size(); ++i) {
        std::cout << "[";
        for (int j = 0; j < triplets[i].size(); ++j) {
            std::cout << triplets[i][j];
            if (j < triplets[i].size() - 1) std::cout << ", ";
        }
        std::cout << "]\n";
    }
    std::cout << "\n";
}

int main() {
    std::cout << "=========================\n";
    std::cout << "Ejecutando 3Sum\n";
    Solution s;
    std::vector<int> nums = {-1, 0, 1, 2, -1, -4};
    std::vector<std::vector<int>> resultadoB= s.threeSumBrute(nums);
    std::vector<int> nums2 = nums;
    std::vector<std::vector<int>> resultadoO= s.threeSum(nums2);
    imprimir(resultadoB, "Resultado threeSumBrute");
    imprimir(resultadoO, "Resultado threeSum");
    return 0;
}
