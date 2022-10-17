//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> a)
	{
	   int ind[n][n];

 for(int i=0;i<n;i++){

     for(int j=0;j<n;j++){

         ind[i][j]=i+j;

     }

 }

 map<int,vector<int>>mp;

 for(int i=0;i<n;i++){

     for(int j=0;j<n;j++){

         mp[ind[i][j]].push_back(a[i][j]);

     }

 }

 vector<int>ans;

 for(auto it:mp){

     vector<int>v=it.second;

     for(auto x:v){

         ans.push_back(x);

     }

 }

 return ans;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends