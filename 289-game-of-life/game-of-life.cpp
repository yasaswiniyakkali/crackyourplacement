class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>> scores(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i+1<m)
                {
                    if(board[i+1][j]==1)
                    {
                        scores[i][j]+=1;
                    }
                }
                if(i-1>=0)
                {
                    if(board[i-1][j]==1)
                    {
                        scores[i][j]+=1;
                    }
                }
                if(j+1<n)
                {
                    if(board[i][j+1]==1)
                    {
                        scores[i][j]+=1;
                    }
                }
                if(j-1>=0)
                {
                    if(board[i][j-1]==1)
                    {
                        scores[i][j]+=1;
                    }
                }
                if(i-1>=0 && j-1>=0)
                {
                    if(board[i-1][j-1]==1)
                    {
                        scores[i][j]+=1;
                    }
                }
                if(i+1<m && j+1<n)
                {
                    if(board[i+1][j+1]==1)
                    {
                        scores[i][j]+=1;
                    }
                }
                if(i+1<m && j-1>=0)
                {
                    if(board[i+1][j-1]==1)
                    {
                        scores[i][j]+=1;
                    }
                }
                if(i-1>=0 && j+1<n)
                {
                    if(board[i-1][j+1]==1)
                    {
                        scores[i][j]+=1;
                    }
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==1)
                {
                    if(scores[i][j]<2)
                    {
                        board[i][j]=0;
                    }
                    if(scores[i][j]>=2 && scores[i][j]<=3)
                    {
                        board[i][j]=1;
                    }
                    if(scores[i][j]>3)
                    {
                        board[i][j]=0;
                    }
                }
                if(board[i][j]==0)
                {
                    if(scores[i][j]==3)
                    {
                        board[i][j]=1;
                    }
                }
            }
        }
    }
};