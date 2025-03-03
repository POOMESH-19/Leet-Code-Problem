class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        int p=1;
        while(p<=n/2){
            if(to_string(p).find('0')==string::npos&& to_string(n-p).find('0')==string::npos)
            return{
                p,n-p
            };
            p++;
        }
        return {0,0};
    }
};