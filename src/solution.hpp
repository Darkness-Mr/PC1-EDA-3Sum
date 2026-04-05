#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <vector>

class Solution {
    public:
        // Solución óptima esperada: O(n^2)
        std::vector<std::vector<int>> threeSum(std::vector<int>& nums);

        // Solución bruta para el benchmark: O(n^3)
        std::vector<std::vector<int>> threeSumBrute(std::vector<int>& nums);
};

#endif