// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  int f(int ind,int N, int price[], vector<vector<int>> &dp){
      if(ind==0)
      {
          return N*price[0];
      }
      if(dp[ind][N]!=-1) return dp[ind][N];
      int nottake= 0+f(ind-1,N,price,dp);
      int take=INT_MIN;
      int rodlength =ind+1;
      if(rodlength <=N){
          take =price[ind] +f(ind,N-rodlength,price,dp);
      }
      return dp[ind][N]=max(take,nottake);
  }
    int cutRod(int price[], int n) {
        //code here
       // vector<vector<int>> dp(n, vector<int>(n+1,0));
       vector<int> prev(n+1,0),cur(n+1,0);
        for(int N=0;N<=n;N++)
        {
            prev[N]= N*price[0]; 
        }
        for(int ind=1;ind<=n;ind++){
            for(int N=0;N<=n;N++){
            //if(dp[ind][N]!=-1) return dp[ind][N];
            int nottake= 0+prev[N];
            int take=INT_MIN;
            int rodlength =ind+1;
            if(rodlength <=N){
                  take =price[ind] +prev [N-rodlength];
      }
       prev[N]=max(take,nottake);    
                
            }
           // prev=cur; 
        }
        return prev[n];
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends