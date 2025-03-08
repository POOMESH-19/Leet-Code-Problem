class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set <char> vowel={'a','e','i','o','u'};
        int len=0;
        int maxlen=0;
        int left=0;
        for(int i=0;i<s.size();i++){
            if(vowel.count(s[i])) len++;
            if(i-left==k){
                if(vowel.count(s[left])){
                    len--;
                }
                left++;
            }
            maxlen=max(maxlen,len);
        }
        return maxlen;
    }
};