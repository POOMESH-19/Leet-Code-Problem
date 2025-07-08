class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        for(int i = 0;i<words.size();i++){
        size_t pos = words[i].find(x);
        if (pos != std::string::npos) {
            ans.push_back(i);
        }
        }
        return ans;
    }
};                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     