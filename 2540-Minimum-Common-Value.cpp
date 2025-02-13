class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
       int p=0;
       int v=0;
       int n=nums1.size();
       int m=nums2.size();
       while(p<n && v<m){
            if(nums1[p]==nums2[v])
                return nums1[p];
            else if(nums1[p]>nums2[v])
                v++;
            else                p++;
       }
       return -1;
    }
};