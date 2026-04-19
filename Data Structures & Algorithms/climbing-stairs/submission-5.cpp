class Solution {
public:

    int f(int i,int &n,vector<int> &dp)
    {
        if(i>n) return 0;
        if(i==n) return 1;
        if(dp[i]!=-1) return dp[i];
        return dp[i]=f(i+1,n,dp)+f(i+2,n,dp);
    }

    int climbStairs(int n) {
        vector<int> dp(n+1,0);
        dp[n]=1;
        for(int i=n-1;i>=0;i--)
        {
            int op1=0,op2=0;
            if(i+1<=n) op1=dp[i+1];
            if(i+2<=n) op2=dp[i+2];

            dp[i]=op1+op2;
        }
        
        return dp[0];
    }
};
