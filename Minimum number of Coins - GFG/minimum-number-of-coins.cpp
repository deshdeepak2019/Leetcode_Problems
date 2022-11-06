//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
       vector<int>ans;
        int arr[10] = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
        int i=9;
        while(N>0){
            if(N>=arr[i]){
                ans.push_back(arr[i]);
                N = N-arr[i];
            }
            else{
                i--;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends