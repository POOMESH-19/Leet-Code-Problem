class Solution {
public:
    int totalFruit(vector<int>& arr) {
        int temp=0, l=0,r=0,m=0, n=arr.size();
        map<int,int> mpp;
        while(r<n){
            int curr= arr[r];
            if(mpp.find(curr)==mpp.end()|| mpp[curr]<l){
                l=temp;
                mpp[arr[l]]=l;
                mpp[curr]=r;
            }
            if(arr[r]!=arr[temp]) temp=r;
            m = max(m, r-l+1);
            r++;
        }
        return m;
    }
};