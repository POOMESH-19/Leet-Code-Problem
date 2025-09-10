class Solution{
public:
    vector<int> sumZero(int n)
    {
        vector<int> ans;
        int P=(n-1)*n/2;
        P*=-1;
        ans.push_back(P);
        for (int i=1;i<n;i++)
        {
            ans.push_back(i);
        }
        return ans;
    }
};