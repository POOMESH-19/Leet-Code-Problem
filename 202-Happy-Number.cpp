class Solution {
public:
    bool isHappy(int p) {
        if(p==1)
        return true;
        int s = 0;
        while (p > 1) {
            while (p > 0) {
                int m = p % 10;
                s += m * m;
                p /= 10;
            }
            if (s == 1) {
                return true;
            }
            p = s;
            s = 0;
            if (p == 4) {  
                return false;
            }
        }
        return false;
    }
};