class Solution {
public:
    int countPath(int n  , vector<int> & dp)
    {
        if(n <= 1) return 1;

        if(dp[n] != -1 ) return dp[n];

        return countPath(n-1 , dp) +  countPath(n-2 , dp);
    }
    int climbStairs(int n) {
        
         vector<int> v(n+1,-1);
        v[0] = 1,v[1] = 1;
        for(int i =2;i<=n;i++)
        v[i] = v[i-1] + v[i-2];
             
        return v[n];


    }
};