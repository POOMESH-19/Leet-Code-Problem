class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int p=fruits.size();
        int v=baskets.size();
        unordered_set<int> st; 
        for(int i=0;i<p;i++){
            for(int j=0;j<v;j++){
                if(baskets[j]>=fruits[i]){
                    if(st.find(j)!=st.end()){
                    }
                    else{
                    st.insert(j);
                    break;
                    }
                }
            }
        }
        return p-st.size();
    }
};