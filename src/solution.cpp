#include <solution.hpp>
#include <algorithm>

std::vector<std::vector<int>> Solution::threeSum(std::vector<int>& nums){
    std::vector<std::vector<int>> result;
    std::sort(nums.begin(), nums.end());
    int n = nums.size();
    for(int i=0 ; i<n-2 ; i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        int obj = -nums[i];
        int izquierda = i + 1;
        int derecha = n - 1;
        while(izquierda<derecha){
            int suma=nums[izquierda]+nums[derecha];
            if(suma==obj){
                result.push_back({nums[i], nums[izquierda], nums[derecha]});
                izquierda++;
                derecha--;
                while(izquierda<derecha && nums[izquierda]==nums[izquierda-1]) izquierda++;
                while(izquierda<derecha && nums[derecha]==nums[derecha+1]) derecha--;
                }else if(suma<obj){
                    izquierda++;
                }else{
                    derecha--;  
            }
        }
    }
    return result;
}
std::vector<std::vector<int>> Solution::threeSumBrute(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    int n = nums.size();
    for (int i=0 ;  i< n-2 ; i++){
        for (int j=i+1 ;  j< n-1 ; j++){
            for (int k=j+1 ;  k< n ; k++){
        if((nums[i]+nums[j]+nums[k]) == 0){
            std::vector<int> triplet = {nums[i], nums[j], nums[k]};
            std::sort(triplet.begin(), triplet.end());
            if(std::find(result.begin(),result.end(), triplet)== result.end()){
                result.push_back(triplet);
            }
        }
    }
    }
    }
    return result;
}