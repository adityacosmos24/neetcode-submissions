class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            int mask=0;
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.') continue;
                int num=board[i][j]-'0';
                if(mask & (1<<num)) return false;
                else mask|=(1<<num);
            }
        }

        for(int j=0;j<9;j++)
        {
            int mask=0;
            for(int i=0;i<9;i++)
            {
                if(board[i][j]=='.') continue;  
                int num=board[i][j]-'0';              
                if(mask & (1<<num)) return false;
                else mask|=(1<<num);
            }
        }


        for(int box=0;box<9;box++) 
        {
            int mask=0;
            for(int i=0;i<3;i++) 
            {
                for(int j=0;j<3;j++) 
                {
                    int r=(box/3)*3+i;
                    int c=(box % 3)*3+j;

                    if(board[r][c]=='.') continue;

                    int num = board[r][c]-'0';
                    if(mask&(1<<num)) return false;
                    mask|=(1<<num);
                }
            }
        }

        return true;
    }
};
