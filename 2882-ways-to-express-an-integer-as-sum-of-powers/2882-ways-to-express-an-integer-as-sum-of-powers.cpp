class Solution {
public:
    int numberOfWays(int n, int x) {
    const int mod=1e9+7;
        vector<int>power;
        for(int num=1;pow(num,x)<=n;num++)
            power.push_back(pow(num,x));
        vector<int>dp(n+1,0);
        dp[0]=1;
        for(int p:power){
            for(int i=n;i>=p;i--){
                dp[i]=(dp[i]+dp[i-p])%mod;
            }
        }
        return dp[n];
    }
};