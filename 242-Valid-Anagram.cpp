class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int p=s.size();
        int v=t.size();
        if(p!=v){
            return false;
        }
        else{
            for(int i=0;i<p;i++){
                if(s[i]==t[i]){
                    continue;    
                }
                else{
                    return false;
                    break;
                }
            }
        }
        return true;
    }
};