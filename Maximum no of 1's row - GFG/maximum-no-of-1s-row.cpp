//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#include<bits/stdc++.h>
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &mat, int n, int m)
        {
         vector<pair<int,int>>mp;
            for(int i=0;i<n;i++){
                vector<int>v=mat[i];
                int sum=0;
                for(int j=0;j<v.size();j++){
                    sum+=v[j];
                }
                mp.push_back({sum,i});
            }
            sort(mp.begin(),mp.end(),greater<pair<int,int>>());
            for(int i=0;i<mp.size()-1;i++){
                if(mp[i].first!=mp[i+1].first){
                    return mp[i].second;
                }
            }
            return 0;
        }
};

//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}
// } Driver Code Ends