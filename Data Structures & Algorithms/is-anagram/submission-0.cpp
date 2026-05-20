class Solution {
public:
    // Solution 2: Using sorting
    void merge(string& vec, int left, int mid, int right) {
        int i, j, k;
        int n1 = mid - left + 1;
        int n2 = right - mid;

        vector<char> leftVec(n1), rightVec(n2);

        for (i = 0; i < n1; i++) {
            leftVec[i] = vec[left + i];
        }
        for (j = 0; j < n2; j++) {
            rightVec[j] = vec[mid + 1 + j];
        }

        i = 0;
        j = 0;
        k = left;

        while (i < n1 && j < n2) {
            if (leftVec[i] <= rightVec[j]) {
                vec[k] = leftVec[i];
                i++;
            }
            else {
                vec[k] = rightVec[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            vec[k] = leftVec[i];
            i++;
            k++;
        }

        while (j < n2) {
            vec[k] = rightVec[j];
            j++;
            k++;
        }
    }

    void mergeSort(string& vec, int left, int right) {
        if (left < right) {
            // Calculate the midpoint
            int mid = left + (right - left) / 2;

            mergeSort(vec, left, mid);
            mergeSort(vec, mid + 1, right);

            merge(vec, left, mid, right);
        }
    }
    
    bool isAnagram(string s, string t) {
        // Both Strings must have equal lengths
        if (s.length() != t.length()) {
            return false;
        }

        mergeSort(s, 0, s.length() - 1);
        mergeSort(t, 0, t.length() - 1);
        std::cout << s << std::endl;
        std::cout << t << std::endl;

        for (size_t i{}; i < s.length(); i++) {
            if (s[i] != t[i]) {
                return false;
            }
        }

        return true;
    }
};
