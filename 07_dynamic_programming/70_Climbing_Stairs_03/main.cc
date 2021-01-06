class Solution {
public:
    int climbStairs(int n) {
        if(n == 0 || n == 1) return 1;
        int fir = 1;
        int sec = 1;
        for(int i = 2; i <= n; i++) {
            int tmp = sec;
            sec  = fir + sec;
            fir = tmp;
        }
        return sec;
    }
};