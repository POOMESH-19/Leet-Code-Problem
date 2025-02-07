class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int P = 0;
        for (int i = 1000; i >= 1; i /= 10)
            P += min({(num1/i)%10, (num2/i)%10, (num3/i)%10}) * i;
        
        return P;
    }
};