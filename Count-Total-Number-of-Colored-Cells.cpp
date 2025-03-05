class Solution {
public:
    long long coloredCells(int n) {
        long long p=1;
        if(n==1){
            return 1;
        }
        int v=2;
        for(int i=2;i<=n;i++){
            p+=(2*v);
            v+=2;
        }
        return p;
    }
};