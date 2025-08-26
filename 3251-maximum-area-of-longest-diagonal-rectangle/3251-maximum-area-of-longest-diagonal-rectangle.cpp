class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double maxDiagonal=0.0;
        int maxarea=0;
        for(auto & rect : dimensions){
            int l=rect[0];
            int b=rect[1];
            double diag=sqrt(l*l+b*b);
            int area=l*b;
            if(diag>maxDiagonal){
                maxDiagonal=diag;
                maxarea=area;
            }
            if(diag==maxDiagonal){
                maxarea=max(maxarea,area);
            }
        }
        return maxarea;
    }
};