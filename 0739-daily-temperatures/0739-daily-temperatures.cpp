class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>ans(n);
            stack<int>s;
              for(int i=n-1;i>=0;i--){
                   while(s.size()>0&&temperatures[s.top()]<=temperatures[i]){
                      s.pop();
                   }
                     if(s.size()==0){
                          ans[i]=0;
                     }
                     else{
                           ans[i]=s.top()-i;
                     }
                     s.push(i);
              }
              return ans;
    }
};