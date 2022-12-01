//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<string> numberPattern(int n)
    {
        int j=0,i=0,k=0;
        for( i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                cout<<j;
            }
            for (k=j-2;k>=1;k--){
                cout<<k;
            }
            cout<<" ";
        }
        
        return {};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
       
        Solution ob;
        vector<string> res = ob.numberPattern(N);
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
    
    }
    return 0;
}
// } Driver Code Ends