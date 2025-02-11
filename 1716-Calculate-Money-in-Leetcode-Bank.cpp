class Solution {
public:
    int totalMoney(int n) {
        int a = 0;
        int m = 1;
        while (n > 0) {
            for (int i = 0; i < min(n, 7); i++) {
                a += m + i;
            }  
            n -= 7;
            m++;
        } 
        return a;
    }
};