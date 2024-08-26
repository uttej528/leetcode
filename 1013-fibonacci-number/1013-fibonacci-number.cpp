class Solution {

    int dynamic(int n,vector<int> &dp)
    {
        if(n<=1)
        {
            dp[n]=n;
            return n;
        }
        if(dp[n]!=-1)
        {
          return dp[n];
        }
       return dp[n]=fib(n-1)+fib(n-2);

    }
public:
    int fib(int n) {

/* 
recurssive method
        if(n<=1)
        {
            return n;
        }
       return fib(n-1)+fib(n-2);
       */

      vector<int> dp(n+1,-1);
      dynamic(n,dp);
      return dp[n];
    }
};