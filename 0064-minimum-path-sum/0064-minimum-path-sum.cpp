class Solution {
public:
    int f(int m , int n , vector<vector<int>> & grid , vector<vector<int>> &dp)
    {
        if(m == 0 && n == 0)
        {
            return grid[m][n];
        }
        if(dp[m][n] != -1 )return dp[m][n];
        int left = 1e+9;
        int  up = 1e+9;

        if(n-1 >= 0 )
        {
            left = grid[m][n] + f(m , n-1 , grid , dp);
        }

        if(m - 1 >= 0 )
        {
            up = grid[m][n] + f(m-1 , n , grid , dp);
        }

        return dp[m][n] = min(left , up);

    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> dp (m , vector<int> (n , -1));
        return f(m-1 , n-1 , grid , dp);
    }
};