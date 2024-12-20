#include <vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> mat;  
        if (matrix.empty()) return mat;  
        int rowbegin = 0, rowend = matrix.size() - 1;
        int colbegin = 0, colend = matrix[0].size() - 1;
        while (rowbegin <= rowend && colbegin <= colend) {
            for (int i = colbegin; i <= colend; ++i) {
                mat.push_back(matrix[rowbegin][i]);
            }
            rowbegin++;
            for (int i = rowbegin; i <= rowend; ++i) {
                mat.push_back(matrix[i][colend]);
            }
            colend--;  
            if (rowbegin <= rowend) {
                for (int i = colend; i >= colbegin; --i) {
                    mat.push_back(matrix[rowend][i]);
                }
                rowend--; 
            }

            if (colbegin <= colend) {
                for (int i = rowend; i >= rowbegin; --i) {
                    mat.push_back(matrix[i][colbegin]);
                }
                colbegin++;  
            }
        }
        return mat;  
    }
};
