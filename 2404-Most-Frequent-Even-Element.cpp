class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> counter;
        for(int i:nums){
            if(i%2==0)
                counter[i]++;
        }
        int a=0,b=-1;
        for(auto  i:counter){
            if(i.second>a ||(i.second==a && i.first<b)){
                a=i.second;
                b=i.first;
            }
        }
        return b;
    }
};