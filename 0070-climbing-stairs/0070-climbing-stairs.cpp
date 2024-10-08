class Solution {
public:
/*
    int climbstair(int i,int n)
    {
        if(i==n)
        {
            return 1;
        }
        if(i>n)
        {
            return 0;
        }

        return climbstair(i+1,n)+climbstair(i+2,n);
    }
*/

/* --------TOP DOWN APPROACH ---------*/
    /* int climbstair(int i,int n,vector<int>&dp)
    {
        if(i==n)
        {
            return 1;
        }
        if(i>n)
        {
            return 0;
        }

        if(dp[i]!=-1)
        {
            return dp[i];
        }
        return dp[i]=climbstair(i+1,n,dp)+climbstair(i+2,n,dp);
    }*/
    int climbStairs(int n) {

        vector<int>dp(n+2,-1);
        dp[n]=1;
        dp[n+1]=0;
        for(int i=n-1;i>=0;i--)
        {
        dp[i]=dp[i+1]+dp[i+2];
        }
        return dp[0];
     //return climbstair(0,n,dp);
   
    }
};