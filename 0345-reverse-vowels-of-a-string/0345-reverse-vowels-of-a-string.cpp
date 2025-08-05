class Solution {
public:
    string reverseVowels(string s) {
        vector<char>vowels;
        for (int i=0;i<s.length();i++) {
            char c=s[i];
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c== 'O'||c=='U') {
                vowels.push_back(c);
            }
        }
        reverse(vowels.begin(),vowels.end());      
        int vowelIndex=0;
        for (int i=0;i<s.length();i++) {
            char c=s[i];
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c== 'O'||c=='U') {
                s[i]=vowels[vowelIndex];
                vowelIndex++;
            }
        }
        return s;
    }
};