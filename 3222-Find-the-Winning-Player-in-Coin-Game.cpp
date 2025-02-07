class Solution {
public:
    string winningPlayer(int x, int y) {
        int p=0;
        while(true){
            if(x>0 and y>=4){
                x=x-1;
                y=y-4;
                p++;
            }
            else break;
        }
        if(p%2==0) return "Bob";
        return "Alice";
    }
};