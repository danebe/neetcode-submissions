class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for (int i:nums) mp[i]++;
        
        vector<vector<int>>buckets(n+1);

        for (auto x:mp){
            int value = x.first;
            int frequency=x.second;
            buckets[frequency].push_back(value);
        }

        vector<int> ans;

        for (int i=n;i>=0;i--){
            for (int num:buckets[i]){
                ans.push_back(num);
                if (ans.size()==k) return ans;
            }
        }
    return ans;
    }
};
  