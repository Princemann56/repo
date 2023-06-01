class Solution {
    vector<vector<int>> DIR{{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,1},{1,-1},{-1,-1}};
public:
    void gameOfLife(vector<vector<int>>& board) {
        
        int m = board.size();
        int n = board[0].size();

        vector<vector<int>> ret = board;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int cnt=0;
                for(int k=0;k<8;k++)
                {
                    int nr = i+DIR[k][0];
                    int nc = j+DIR[k][1];
                    if(nr<0 || nc<0 || nr>=m || nc>=n)  continue;
                    if(board[nr][nc] == 1)  cnt++;
                }

                if(cnt < 2 || cnt>3) ret[i][j] = 0;
                else if(cnt == 3)    ret[i][j] = 1; 
            }
        }

        // return ret;
        board = ret;

    }
};