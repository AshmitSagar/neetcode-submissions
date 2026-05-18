#include <algorithm>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Solution 2: Using Sorting algorithm
        if (nums.empty()) return false;

        std::stable_sort(nums.begin(), nums.end());
        for (int i{}; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i+1]) {
                return true;
            } 
        }
        return false;
    }
};