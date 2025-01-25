class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v(n+1);
        for(int i=0;i<=n;i++){
            int c=0;
            int a=i;
            while(a>0){
                if(a%2==1){
                    c++;
                }
                a=a/2;
            }
            v[i]=c;
        }
        return v;
    }
};