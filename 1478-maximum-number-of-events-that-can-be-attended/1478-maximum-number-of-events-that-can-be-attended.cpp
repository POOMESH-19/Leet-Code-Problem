class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        auto lambda=[&](vector<int>&a,vector<int> &b)
        {
          if(a[1]<b[1]) return true;
          if(a[1]==b[1])return  a[0]<b[0];
          return false;
        };
        sort(events.begin(),events.end(),lambda);
        set<int> st;
        for(auto i: events)
        {
            cout<<i[0]<<i[1]<<endl;
        }
        for(int i=1;i<=100000;i++)
        {
            st.insert(i);
        }
        int cnt=0;
        for(auto i:events)
        {
            int s=i[0];
            int p=i[1];
            auto v=st.lower_bound(s);
            if(v==st.end() || *v>p)
            {
                continue;
            }
            else
            {
                cnt++;
                st.erase(v);
            }
          
        }
        return cnt;
    }
};