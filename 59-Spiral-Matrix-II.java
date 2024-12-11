class Solution {
    public int[][] generateMatrix(int n) {
        int count = 1;
        int[][] res = new int[n][n];
        int r = 0;
        int c = 0;
        int lr = n;
        int lc = n;

        while(r < lr && c < lc){
            for(int i = c; i < lc; i++){
                res[r][i] = count++;
            }
            r++;
            for(int i = r; i < lr; i++){
                res[i][lc - 1] = count++;
            }
            lc--;
            if(r < lr){
                for(int i = lc - 1; i >= c; i--){
                    res[lr - 1][i] = count++;
                }
                lr--;
            }
            
            if(c < lc){
                for(int i = lr - 1; i >= r; i--){
                    res[i][c] = count++;
                }
                c++;
            }

        }
        return res;
    }
}