class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [&](const vector<int> &a, const vector<int> &b) {
            return a[0] < b[0];
        }); 
        int start = points[0][0], end = points[0][1];
        int arrowCnt = 0;
        for(int i = 1; i < points.size(); i++) {
            if(start <= points[i][0] && end >= points[i][0]) {
                start = max(start, points[i][0]);
                end = min(end, points[i][1]);
            } else {
                arrowCnt++;
                start = points[i][0], end = points[i][1];
            }
        }
        arrowCnt++;
        return arrowCnt;
    }
};