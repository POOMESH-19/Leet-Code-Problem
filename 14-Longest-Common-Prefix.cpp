class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        int p=strs.size();
        string first=strs[0],last=strs[p-1];{
            for (int i=0;i<min (first.size(),last.size());i++){
                    if(first[i]!=last[i]){
                        return ans;
                    }
                    ans=ans+first[i];
            }
        }
        return ans;
    }
};