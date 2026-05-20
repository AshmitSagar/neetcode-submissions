class Solution {
public:
    // Solution 1: Using HashMap with sorting
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for (const auto& s : strs) {
            string sortedS = s;
            sort(sortedS.begin(), sortedS.end());
            res[sortedS].push_back(s);
        }

        vector<vector<string>> result;
        for (auto& paired : res) {
            result.push_back(paired.second);
        }
        return result;
    }
};
