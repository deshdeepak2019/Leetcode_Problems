//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        if(n==1) return 1;
        if(n==2) return 2;
        if(n==3) return 4;
        vector<long long>dp(n,-1);
        dp[0]=1;
        dp[1]=2;
        dp[2]=4;
        for(int i=3;i<n;i++){
            dp[i]=(dp[i-3]+dp[i-1]+dp[i-2])%(1000000007);
        }
        return dp[n-1];
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends