class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if (nums.empty()) return 0;
       unordered_set<int> set(nums.begin(),nums.end());
       int longestSequence = 0;
       for (int i:nums){
        if (!set.contains(i-1)){
            int currentValue = i;
            int currentSequence = 1;
        
            while (set.contains(currentValue+1)){
                    currentValue++;
                    currentSequence++;
            }
        
        longestSequence = max(currentSequence,longestSequence);
        }
       }
    return longestSequence;
    }
};
