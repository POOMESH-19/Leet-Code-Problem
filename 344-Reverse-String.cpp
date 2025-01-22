class Solution {
public:
    void reverseString(vector<char>& s) {
        int p=0;
        int v=s.size();
        int k=v-1;
        while(p<k){
            swap(s[k],s[p]);
            p++;
            k--;
        }
    }
};