class Solution
{
public:
    string getPermutation(int n,int k)
    {
        k--;
        short used=1;
        int list[9];
        int fact[9];
        fact[0]=1;
        for(int i=1;i<9;i++)
        {
            fact[i]=fact[i-1]*i;
        }
        for(int i=0;i<n;i++)
        {
            int m=k/fact[n-i-1];
            k%=fact[n-i-1];
            for(int j=1;j<=n;j++)
            {
                if(used&(1<<j))
                {
                    continue;
                }
                if(m==0)
                {
                    used|=1<<j;
                    list[i]=j;
                    break;
                }
                else
                {
                    m--;
                }
            }
        }
        string s(n,'0');
        for(int i=0;i<n;i++)
        {
            s[i]+=list[i];
        }
        return s;
    }
};