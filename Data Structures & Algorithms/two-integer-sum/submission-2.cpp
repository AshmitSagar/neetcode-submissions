class Solution {
public:
    // Solution 2: Using Hashmap (improved)
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> prevMap;
        for (int i{}; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (prevMap.contains(diff)) {
                return {prevMap[diff], i};
            }
            prevMap[nums[i]] = i;
        }
    }
};
