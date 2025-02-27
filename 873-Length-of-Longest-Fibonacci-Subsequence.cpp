class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mp;
        for (auto num : arr) {
            mp[num]++;
        }        
        int ans = 0;
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                int a = arr[i], b = arr[j];
                int length = 2;
                while (mp.find(a + b) != mp.end()) {
                    int c = a + b;
                    a = b;
                    b = c;
                    length++;
                }
                ans = max(ans, length);
            }
        }
        return (ans == 2) ? 0 : ans;
    }
};