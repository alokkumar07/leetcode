// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long countStrings(string S)
    {
        // code here
        vector<long long> count(26,0); 
        long long ans=0;
        long long n =S.size();
        for(int i=0;i<S.length();i++)
        {
            count[S[i]-'a']++;
        }
        ans =n*(n-1)/2;
        
        bool flag =false;
        
        for(int i=0;i<26;i++)
        {
          if(count[i]>1) flag =true;
          ans-= count[i]*(count[i]-1)/2;
        }
        return flag? ans+1:ans;
    }
};


// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution ob;
        long long ans = ob.countStrings(S);
        cout<<ans<<endl;
    }
    return 0;
}   // } Driver Code Ends