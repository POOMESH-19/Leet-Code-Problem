class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> n(sentence.begin(),sentence.end());
        return n.size()==26;
    }
};