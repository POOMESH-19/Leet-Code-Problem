class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int row = matrix.size();
        if (row == 0) return 0; 
        int column = matrix[0].size();
        int ans = 0;
        vector<vector<int>> dp(row + 1, vector<int>(column + 1, 0));

        for (int i = 1; i <= row; i++) {
            for (int j = 1; j <= column; j++) {
                if (matrix[i - 1][j - 1] == '1') {
             dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
                    ans = max(ans, dp[i][j]);
                }
            }
        }
        return ans * ans;
    }
};
