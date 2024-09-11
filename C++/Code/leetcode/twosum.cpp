#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;
        int hash[nums.size()];
        for (int i=0; i<nums.size(); i++){
            if(hash[target - nums[i]]){
                sol.push_back(hash[target - nums[i]]-1);
                sol.push_back(i);
                return sol;
            }
            else{
                hash[nums[i]] = i+1;
            }
        }
        return sol;
    }
};
