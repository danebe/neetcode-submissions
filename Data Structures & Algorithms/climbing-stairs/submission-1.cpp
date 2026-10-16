class Solution {
public:
    int climbStairs(int n) {
        if (n<=2) return n;

        int previous = 1;
        int current = 1;
        for (int i=2;i<=n;i++){
            int temp = current;
            current = previous+current;
            previous = temp;
        }
    return current;
    
    }
};
