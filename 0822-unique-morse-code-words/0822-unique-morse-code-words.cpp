class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string>p;
        vector<string>morse={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string temp="";
        for(auto word:words){
            temp="";
            for(auto c:word){
                temp +=morse[c-'a'];
            }
            p.insert(temp);
        }
        return p.size();
    }
};