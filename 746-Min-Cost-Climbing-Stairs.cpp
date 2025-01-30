class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int p=cost.size();
        for(int i=2;i<p;i++)
        {
            cost[i]+=min(cost[i-1],cost[i-2]);
        }
        return min(cost[p-1],cost[p-2]);
    }
};