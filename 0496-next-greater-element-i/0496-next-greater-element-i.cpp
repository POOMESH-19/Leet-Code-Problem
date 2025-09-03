class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            bool f=false;
            bool p=false;
            for(int j=0;j<nums2.size();j++){
                if(nums2[j]==nums1[i]){
                    f=true;
                    continue;
                }
                    if (f && nums2[j]>nums1[i]) {
                    v.push_back(nums2[j]);
                    p=true;
                    break;
                }
            }
            if (!p) {
                v.push_back(-1); 
            }
        }
        return v;
    }
};