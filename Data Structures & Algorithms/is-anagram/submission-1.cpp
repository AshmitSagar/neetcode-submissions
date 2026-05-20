#include <map>

class Solution {
public:
    // Solution 1: Using Hashmap
    bool isAnagram(string s, string t) {
        // Both Strings must have equal lengths
        if (s.length() != t.length()) {
            return false;
        }

        std::map<char, int> freq;
        for (char c : s) {
            freq[c] += 1;
        }

        for (char c : t) {
            freq[c] -= 1;

            if (freq[c] < 0) {
                return false;
            }
        }

        return true;
    }
};
