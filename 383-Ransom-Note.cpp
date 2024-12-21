class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int p=ransomNote.size();
        int s=magazine.size();
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        int v=0;
        int n=0;
        int c=0;
        int j=0;
        for(int i=0;i<s;i++){
            if(ransomNote[j]==magazine[i]){
                c++;
                j++;
            }
        }
        return c==p;
    }
};