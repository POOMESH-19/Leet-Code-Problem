class Solution {
public:
    int expressiveWords(string s, vector<string>& words) {
        int result=0;
        for(string&word:words){
            int i=0,j=0;
            for(;i<s.size()&&j<word.size();i++,j++){
                int count1=1;
                for (;i+1<s.size()&&s[i+1]==s[i];i++) 
                    count1++;
                int count2=1;
                for(;j+1<word.size()&&word[j+1]==word[j]&&count2<count1;j++) 
                    count2++;
                if (s[i]!=word[j])break;
                if (count2<count1&&count1<3) break;
            }
            if (j==word.size()&&i==s.size())result++;
        }
        return result;
    }
};