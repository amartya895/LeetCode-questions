class Solution {
public:
    int f(int m , int n , vector<vector<int>> & grid , vector<vector<int>>&dp )
    {
        if(m == 0 && n == 0)
        {
            
            return grid[0][0] == 0 ? 1 : 0;
            
        }

        if(dp[m][n] != -1) return dp[m][n];

        int left = 0;

        if(n-1 >= 0 && grid[m][n-1] == 0)
        {
            left += f(m , n-1 , grid , dp);
            
        }

        int up = 0;

        if(m-1 >= 0 && grid[m-1][n] == 0)
        {
            up += f(m-1 , n , grid ,dp);
        }


        

        return dp[m][n]= left + up;
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size() ;
            if (grid[0][0] == 1 || grid[m-1][n-1] == 1) return 0;
            vector<vector<int>> dp(m , vector<int>(n , -1));
            return f(m -1 , n -1 , grid   ,dp);
    }
};