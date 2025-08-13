class Solution {
public:
    string convertToBase7(int num)
    {
        if(num==0)
            return "0";
        string ans="";
        bool isNeg=(num<0);
        num=abs(num);
        while(num>0)
        {
            ans= to_string(num%7) + ans;
            num=num/7;
        }    
        if(isNeg)
            return '-'+ans;
        else
            return ans;
    }
};