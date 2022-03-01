class Solution {
public:
     
    int f(int ind,int T,vector<int>& c,vector<vector<int>> &dp ){
        if(ind==0){
            return (T %c[0]==0);
        }
        if(dp[ind][T]!=-1) return dp[ind][T];
        int nontake =f(ind-1, T,c,dp);
        int take=0;
        if(c[ind]<=T) take=f(ind,T-c[ind],c,dp);
        return dp[ind][T]=take+ nontake;
    }
    int change(int amount, vector<int>& coins) {
         int n= coins.size();
      vector<vector<int>> dp(n,vector<int>(amount+1,-1));
         //  memset(dp,-1,sizeof(dp));
     
        return f(n-1,amount,coins,dp);
        
    }
};