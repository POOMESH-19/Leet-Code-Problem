class Solution {
public:
     int findLUSlength(string a, string b) {
        if(a==b) return -1;
        int x=a.length();
        int y=b.length();
        return (x>y ) ? x : y ; 
    }
};