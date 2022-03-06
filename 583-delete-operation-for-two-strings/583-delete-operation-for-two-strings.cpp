#include<bits/stdc++.h>
class Solution {
public:
    
//     int f(string s,string t,int n, int m,vector<vector>> &dp){
//         for(int i=0;i<=n;i++) dp[i][0]=0;
//         for(int j=0;j<=m;j++) dp[0][j]=0;
//         if(i==0 || j==0) return 0;
        
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=m;j++){
//                 if(s[i-1]==t[j-1])
//                     dp[i][j]=1+dp[i-1][j-1];
//                 else
//                     dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//             }
//         }
//         return dp[n][m];
//     }
      int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m= text2.size();
        //vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        vector<int> prev(m+1,0),cur(m+1,0);
        for(int j=0;j<=m;j++) prev[j]=0;
        //for(int i=0;i<=n;i++) dp[i][0]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                
                if(i==0 || j==0) return 0;
        
       // if(dp[i][j]!=-1) return dp[i][j];
        
        if(text1[i-1]== text2[j-1]) cur[j] =1 +prev [j-1];
            
         else cur[j]= max(prev[j],cur[j-1]);
                
            }
            prev=cur;
        }
        return prev[m];
        
    }
    int minDistance(string word1, string word2) {
        // int n=word1.size();
        // int m=word2.size();
        // vector<vector<int>> dp(n+1,vector<int>(m+1,0))
        //     int ans=f(word1,word2,n,m,dp);
        // int f=n-ans;
        // int s=m-ans;
        // return f+s;
        return word1.size()+word2.size()-2*longestCommonSubsequence(word1,word2);
        
    }
};