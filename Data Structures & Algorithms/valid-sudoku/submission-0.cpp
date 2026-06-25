class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9]={false};
        bool cols[9][9]={false};
        bool boxes[9][9]={false};

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')continue;
                else{
                    int val=board[i][j]-'0'-1;
                    int index=(i/3)*3+j/3;
                    if(rows[i][val] || cols[j][val] || boxes[index][val])return false;
                     rows[i][val]=true;

                     cols[j][val]=true;

                     boxes[index][val]=true;
                }
            }
        }

        return true;
    }
};
// 0 1 2 3 4 5 6 7 8
// 1.      
// 2.       
// 3
// 4
// 5
// 6
// 7
// 8