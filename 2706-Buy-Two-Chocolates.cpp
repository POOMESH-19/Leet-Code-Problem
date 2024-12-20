class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n=prices.size();
        sort(prices.begin(),prices.end());
        for(int i=0;i<n;i++){
            if(prices[i]+prices[i+1] ==money){
                return 0;
            }
            else if(prices[i]+prices[i+1] <money){
                return money-(prices[i]+prices[i+1]);
            }
            else{
                return money;
            }
        }  
        return money;  
    }
};