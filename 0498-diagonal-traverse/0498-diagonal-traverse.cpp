class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int i = 0, j = 0;
        int m = mat.size();
        int n = mat[0].size();
        vector<int> ans;
        while (ans.size()!=m*n){
            while (i>=0 && j<n){
                ans.push_back(mat[i][j]);
                i--;
                j++;
            }
            if (j==n) { 
                j--;
                i+=2;
            } else { 
                i++;
            }
            while (j>=0 && i<m) {
                ans.push_back(mat[i][j]);
                i++;
                j--;
            }
            if (i==m){ 
                i--;
                j+=2;
            } else{ 
                j++;
            }
        }
        return ans;
    }
};
