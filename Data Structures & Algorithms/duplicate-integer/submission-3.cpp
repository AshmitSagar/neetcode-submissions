#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Solution 3: using hashset
        std::unordered_set<int> seen;
        seen.reserve(nums.size());
        for (int x: nums) {
            auto res = seen.insert(x);
            if (!res.second) return true;
        }
        return false;
    }
};