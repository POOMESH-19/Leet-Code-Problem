class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> P;
        for (int n : nums) {
            int s = 0;
            while (n) {
                s += n % 10;
                n /= 10;
            }
            P.push_back(s);
        }
        sort(P.begin(),P.end());
        return P[0];
    }
};