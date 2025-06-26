class Solution {
public:
    int longestSubsequence(string s, int k) {
        int count = 0; 
        int power = 0;      
        long long value = 0;
        for (char c : s) {
            if (c == '0') count++;
        }
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '1') {
                if (power < 32) { 
                    if (value + (1LL << power) <= k) {
                        value += (1LL << power);
                        count++;
                    } else {
                        continue;
                    }
                    power++;
                }
            } else {
                power++;
            }
        }
        return count;
    }
};
