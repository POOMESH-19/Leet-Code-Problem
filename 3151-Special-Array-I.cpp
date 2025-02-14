class Solution {
public:
    bool isArraySpecial(vector<int>& a) {
        for (int i = 0; i < a.size() - 1; ++i)
            if ((1 & a[i]) == (1 & a[i + 1])) return false;
        return true;
    }
};