class Solution {
public:
    string convert(string s, int numRows) {
        string a="";
        if(numRows==1){
            return s;
        }    
        int cl=2*numRows-2;
        for(int i=0;i<=numRows;i++){
            int it=(i==numRows)?cl:2*numRows-2*i;
            int ci=i-1;
            while(ci<s.size()){
                a.push_back(s[ci]);
                ci+=it;
                it=cl-it;
                if(it==0) it=cl;
            }
        }
        return a;
    }
};