class Solution {
public:
    int minOperations(vector<int>& nums) {
        nums.push_back(0);
        int n=nums.size();
        vector<unordered_set<int>>vec(n);
        stack<int>st;
        st.push(0);
        for (int i=1;i<n;i++){
            while (!st.empty()&&nums[st.top()]>nums[i]){
                vec[i].insert(nums[st.top()]);
                st.pop();
            }
            st.push(i);
        }
        int count=0;
        for (int i=0;i<n;i++){
            count+=vec[i].size();
        }
        return count;
    }
};