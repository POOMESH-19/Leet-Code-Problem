class Solution {
public:
    string toHex(int num) {
        stringstream p;
        p<<hex<< num;
        return p.str();
    }
};