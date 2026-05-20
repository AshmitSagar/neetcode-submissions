class Solution {
public:
    // Solution 2: Using Hashmap
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> prevMap;
        for (int i{}; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (prevMap.contains(diff) && i != prevMap[diff]) {
                return {prevMap[diff], i};
            }
            prevMap[nums[i]] = i;
        }
    }
};
