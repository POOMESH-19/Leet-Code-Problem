class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string>p;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char num=board[i][j];
                if(num=='.')continue;
                string row="row"+to_string(i)+"-"+num;
                string col="col"+to_string(j)+"-"+num;
                string box="box"+to_string(i/3)+to_string(j/3)+"-"+num;
                if(p.count(row)||p.count(col)||p.count(box))
                    return false;
                p.insert(row);
                p.insert(col);
                p.insert(box);
            }
        }
        return true;
    }
};