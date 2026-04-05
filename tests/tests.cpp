#include <iostream>
#include <vector>
#include <algorithm>
#include  solution.hpp

static void printOutcome(bool ok, const std::string& name) {
    std::cout << name << :  << (ok ?  PASÓ : FALLÓ) << \n;
}

static bool sameTriplets(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b) {
    for (auto& triplet : a) {
        std::sort(triplet.begin(), triplet.end());
    }
    for (auto& triplet : b) {
        std::sort(triplet.begin(), triplet.end());
    }
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    Solution solution;
    std::vector<int> nums = {-1, 0, 1, 2, -1, -4};
    std::vector<std::vector<int>> expected = {{-1, -1, 2}, {-1, 0, 1}};

    auto numsForBrute = nums;
    auto numsForOpt = nums;

    auto resultBrute = solution.threeSumBrute(numsForBrute);
    auto resultOpt = solution.threeSum(numsForOpt);

    bool okBrute = sameTriplets(resultBrute, expected);
    bool okOpt = sameTriplets(resultOpt, expected);

    printOutcome(okBrute, threeSumBrute);
    printOutcome(okOpt, threeSum);

    return (okBrute ; okOpt) ? 0 : 1;
}
