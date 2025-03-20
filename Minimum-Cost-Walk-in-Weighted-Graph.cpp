#define N  200005
int parent[N];
int S[N];
void init(int n)
{
    memset(S,1,sizeof(S));
    for(int i=0;i<n;i++)
    {
        parent[i]=i;
    }
}
int Parent(int node)
{
    if(parent[node]==node)return node;
    return parent[node]=Parent(parent[node]);
}
void Union(int a,int b)
{
    if(Parent(a)==Parent(b))return;
    if(S[a]<S[b])swap(a,b);
    S[a]+=S[b];
    int ul=Parent(b);
    parent[ul]=a;

}
class Solution {
public:
    vector<int> minimumCost(int n, vector<vector<int>>& edges, vector<vector<int>>& query) {
        init(n);
        for(auto i:edges)
        {
           int s=i[0];int d=i[1];
            Union(s,d);
        }
        map<int,int>mp;
        for(int i=0;i<edges.size();i++)
        {
            if(Parent(edges[i][0])==Parent(edges[i][1]))
            {
                int p=Parent(edges[i][0]);
                if(mp.find(p)!=mp.end())
                {
                    mp[p]&=edges[i][2];
                }
                else mp[p]=edges[i][2];
            }
        }
        vector<int>arr;
        int c=0;
        for(auto i:query)
        {
            int s=i[0];
            int d=i[1];
            if(Parent(s)==Parent(d))
            arr.push_back(mp[Parent(s)]);
            else arr.push_back(-1);
            c++;
        }
        return arr;
    }
};