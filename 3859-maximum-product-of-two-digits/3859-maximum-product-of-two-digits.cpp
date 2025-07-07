class Solution {
public:
    int maxProduct(int n) {
        vector<int>digits;
        while (n!=0) {
            int digit=n%10;
            digits.push_back(digit);
            n/=10;
        }        
        int max_product=INT_MIN;
        for (int i=0;i<digits.size();i++) {
            for (int j=i+1;j<digits.size();j++) {
                int product=digits[i]*digits[j];
                if (product>max_product) {
                    max_product=product;
                }
            }
        }
        return max_product;
    }
};