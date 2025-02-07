class Solution {
public:
    int numberOfChild(int n, int k) {
        n--;
        int r=k/n;
        int v=k%n;
        if(r%2==0) return v;
        else{
            return (n-v);
        }
    }
};