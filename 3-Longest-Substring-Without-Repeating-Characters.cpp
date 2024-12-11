class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        map<char,int> freq;
        int st=0;
        int ma=0;
        for(int i=0;i<n;i++){
            if(freq[s[i]]==0){
                freq[s[i]]++;

            }
            else{
                while(st<i && s[i]!=s[st]){
                    freq[s[st]]--;
                    st++;

                }
                st++;

            }
            ma=max(ma,i-st+1);
        }
        return ma;
        
    }
};