class Solution {
public:
    // Solution 1: Loop through the entire array and compare
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i{}; i < nums.size(); i++) {
            for (int j{i + 1}; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return vector<int> {i, j};
                }
            }
        }
    }
};
