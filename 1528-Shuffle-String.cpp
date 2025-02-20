class Solution {
public:
    string restoreString(string p, vector<int>& indices) {
        string res = p;
        for(int i =0; i < indices.size(); ++i)
            res[indices[i]] = p[i];
        return res;
    }
};