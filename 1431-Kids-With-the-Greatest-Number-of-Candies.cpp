class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int m=0;
        for(int i=0;i<n;i++){
            m=max(m,candies[i]);
        }   
        vector<bool> r(n); 
        for(int i=0;i<n;i++){
            if((candies[i]+extraCandies)>=m){
                r[i]=true;
            }
            else{
                r[i]=false;
            }
        }
        return r;
    }
};