class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& q) {
        int n = q.size();
        map<int, int> mp;
        map<int, int> m;
        int ans1 = 0;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            int ball = q[i][0];
            int color = q[i][1];
            if (mp.find(ball)!=mp.end()) {
                int prevcolor = mp[ball];
                m[prevcolor]--;
                if (m[prevcolor] == 0)
                    ans1--;
            }
            mp[ball] = color;
            if (m[color] == 0)
                ans1++;
            m[color]++;
            ans.push_back(ans1);
        }
        return ans;
    }
};