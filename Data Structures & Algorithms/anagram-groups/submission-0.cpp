class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for (string i : strs){
            string key = i;
            sort(key.begin(),key.end());
            mp[key].push_back(i);

        }
        vector<vector<string>>ans;
        for (auto &it: mp) ans.emplace_back(it.second);
        return ans;

    }
};
