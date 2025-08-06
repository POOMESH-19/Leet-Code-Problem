class Solution {
public:
    string orderlyQueue(string s, int k){
        string ans;
        ans = s;
        if (k>1){
            sort(s.begin(),s.end());
            return (s);
        }
        else{
            string temp="";
            temp = s + s;
            for (int i=0;i+s.length()<=temp.length();i++){
                ans=min(ans,temp.substr(i,s.length()));
            }
            return ans;
        }
    }
};