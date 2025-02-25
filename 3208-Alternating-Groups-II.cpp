class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        vector<int> edit = colors;
        for(auto it : colors) edit.push_back(it);
        int ans = 0;
        int length = 1;
        int n = colors.size();
        for(int i = 1;i < n + k - 1 ; i++){            
            if(edit[i]==edit[i-1]){
                    length = 1;
            }
            else length++;
            if(length >= k) ans++;
        }
        return ans;
    }
};