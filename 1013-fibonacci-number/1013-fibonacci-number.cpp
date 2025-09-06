class Solution {
public:
    int fibo(int num,vector<int>&dp){
    if(num<=1){
        return  num;
    }
    if(dp[num]!=-1){
        return dp[num];
    }
    return dp[num]= fibo(num-1,dp)+fibo(num-2,dp);
}
    int fib(int n) {  
        vector<int>dp(n+1,-1);
        int sum=fibo(n,dp);
        return sum;
    }
};