class Solution {
public:
    int hammingWeight(int n) {
        int p=0;
        while(n){
            n=n&(n-1);
            p+=1;
        }
        return p;
    }
};