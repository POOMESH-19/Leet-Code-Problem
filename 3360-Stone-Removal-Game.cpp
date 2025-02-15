class Solution {
public:
    bool canAliceWin(int n) {
        bool P = false;
        int p = 10;
        while (n >= p) {
            n -= p;
            p -= 1;
            P = !P;
        }
        return P;
    }
};