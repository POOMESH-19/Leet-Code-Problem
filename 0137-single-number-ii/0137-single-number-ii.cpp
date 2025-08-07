class Solution {
public:
    int singleNumber(vector<int>& v) {
        int n=v.size();
        sort(v.begin(),v.end());
        int c=0,ans=v[n-1];
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){c++;}
            else if(v[i]!=v[i+1] && c==0){

                ans=v[i];
            
            }
            else {c=0;}
        }
        return ans;
    }
};
