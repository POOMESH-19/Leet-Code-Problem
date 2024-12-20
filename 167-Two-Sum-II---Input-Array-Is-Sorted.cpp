class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int v = 0;
    int p = numbers.size() -1;
   
    while(v < p){
        if(numbers[v] + numbers[p] == target){
           
            return {v+1,p+1};;
        }
        else if(numbers[v] + numbers[p] > target){
            p--;
        }
        else{
            v++;
        }
    }
	return {}; 
    }
};