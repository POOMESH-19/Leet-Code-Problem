class Solution {
public:
    vector<int> pivotArray(vector<int>& nums,int pivot) {
        int p=0;
        bool check=false;
        for (int i=0;i<nums.size();i++) {
            int n=nums[i];
            if (nums[i]<pivot) {  
                if (p!=i) {
                    int temp=nums[i];
                    nums.erase(nums.begin()+i);
                    nums.insert(nums.begin()+p,temp);
                }
                p++;
            }
        }
        for (int i=p;i<nums.size();i++) {  
            if (nums[i]==pivot) {
                if (p!=i) {
                    int temp=nums[i];
                    nums.erase(nums.begin()+i);
                    nums.insert(nums.begin()+p,temp);
                }
                p++;
            }
        }
        return nums;
    }
};