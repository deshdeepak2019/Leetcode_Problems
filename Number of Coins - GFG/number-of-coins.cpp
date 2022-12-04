//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int solve(vector<int>&cost,int tar,int M,vector<int>&dp){
      if(tar==0){
          return 0;
      }
      if(tar<0) return INT_MAX;
      if(dp[tar]!=-1) return dp[tar];
      int mini=INT_MAX;
      for(int i=0;i<M;i++){
          int ans=solve(cost,tar-cost[i],M,dp);
          if(ans!=INT_MAX){
              mini=min(mini,1+ans);
              dp[tar]=mini;
          }
      }
      return mini;
	}
	int minCoins(int coins[], int M, int tar) 
	{ 
	    vector<int>cost;
	    vector<int>dp(tar+1,-1);
	    for(int i=0;i<M;i++){
	        cost.push_back(coins[i]);
	    }
	   int ans=solve(cost,tar,M,dp);
	   if(ans==INT_MAX){
	       return -1;
	   }else{
	       return ans;
	   }
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends