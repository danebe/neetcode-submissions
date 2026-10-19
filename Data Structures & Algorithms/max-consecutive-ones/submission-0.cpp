class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int consecutive = 0;
        int current = 0;
        for (int i : nums){
            if (i==1) {
                current++;
                consecutive = max(current,consecutive);
            }
            else current = 0;

        }
    return consecutive;
    }
};