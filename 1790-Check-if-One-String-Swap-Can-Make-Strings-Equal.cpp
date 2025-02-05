class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        // sort(s1.begin(),s1.end());
        // sort(s2.begin(),s2.end());
        // return s2==s1;
        int p=-1;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                if(p==-1){
                    p=i;
                }
                else{
                    swap(s1[i],s1[p]);
                    return s2==s1;
                }
            }
        }
        return s2==s1;
    }
};