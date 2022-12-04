//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int mod=1e9+7;
    int solve(int n,vector<int>&dp){
        if(n<=2){
            return n;
        }
        if(dp[n]!=-1) return dp[n]%mod;
        dp[n]= solve(n-1,dp)%mod+solve(n-2,dp)%mod;
        return dp[n]%mod;
    }
    int countWays(int n)
    {
        vector<int>dp(n+1,-1);
      return solve(n,dp)%mod;
      
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends