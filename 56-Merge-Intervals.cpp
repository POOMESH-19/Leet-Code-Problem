class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int strt = intervals[0][0] , end = intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(end < intervals[i][0]){
                ans.push_back({strt,end});
                strt = intervals[i][0];
                end = intervals[i][1];
            }
            else{
                end = max(end , intervals[i][1]);
            }
        }
        ans.push_back({strt,end});
        return ans;
    }
};