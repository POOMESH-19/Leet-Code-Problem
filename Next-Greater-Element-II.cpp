class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> p(nums.size());
        stack<int> st;
        int n = nums.size();
        for(int i=2*n;i>=0;i--){
            while(!st.empty() && st.top() <= nums[i%n]){
                st.pop();
            }
            if(i<n){
                p[i]=(st.empty())? -1 : st.top();
            }
            st.push(nums[i%n]);
        }
        return p;
    }
};