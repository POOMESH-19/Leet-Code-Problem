class Solution {
public:
    int hIndex(vector<int>& citations) {
    int h_index=0;   
      sort(citations.begin(), citations.end());
      int p=citations.size();
      for(int v=0;v<p;v++){
        int s=p-v;
        if(citations[v]>=s){
            h_index=s;
            break;
        }
      }
      return h_index;
    }
};