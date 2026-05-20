class Solution {
public:
    // Solution 1: Using sorting
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        vector<string> temp = strs;
        for (int i{}; i < strs.size(); i++) {
            std::ranges::sort(temp[i]);
        }

        vector<bool> used(strs.size(), false);
        for (int i{}; i < strs.size(); i++) {
            if (used[i]) continue;
            
            vector<string> group;
            group.push_back(strs[i]);
            used[i] = true;
            
            for (int j{i + 1}; j < strs.size(); j++) {
                if (!used[j] && temp[i] == temp[j]) {
                    group.push_back(strs[j]);
                    used[j] = true;
                }
            }
            result.push_back(group);
        }
        return result;
    }
};
