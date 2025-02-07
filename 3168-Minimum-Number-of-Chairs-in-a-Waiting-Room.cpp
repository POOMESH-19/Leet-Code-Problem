class Solution {
public:
    int minimumChairs(string s) {
        int c = 0, a = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'E') {
                c++;
            } else {
                c--;
            }
            a = max(c, a);
        }
        return a;
    }
};