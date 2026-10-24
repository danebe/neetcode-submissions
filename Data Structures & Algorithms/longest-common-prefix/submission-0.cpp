class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        int prefixLen = strs[0].size();

        for (int i = 1; i < strs.size(); i++) {
            int j = 0;

            while (j < prefixLen &&
                   j < strs[i].size() &&
                   strs[0][j] == strs[i][j]) {
                j++;
            }

            prefixLen = j;

            if (prefixLen == 0)
                return "";
        }

        return strs[0].substr(0, prefixLen);
    
    }
};