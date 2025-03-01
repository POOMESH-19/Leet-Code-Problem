
class Solution {
public:
    int countArrays(vector<int>& original, vector<vector<int>>& bounds) {
        int n = original.size();
        int low = bounds[0][0], high = bounds[0][1];
        
        for (int i = 1; i < n; i++) {
            int diff = original[i] - original[i - 1];
            low = max(bounds[i][0], low + diff);
            high = min(bounds[i][1], high + diff);
            
            if (low > high) return 0; // No valid sequence possible
        }
        
        return high - low + 1;
    }
};