//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string lookandsay(int n) {
        if(n==1) return "1";
        if(n==2) return "11";
        string s="11";
        int cnt=0;
        for(int i=3;i<=n+1;i++){
            string tmp="";
            s+="$";
            for(int j=1;j<s.size();j++){
                if(s[j]!=s[j-1]){
                    tmp+=to_string(cnt);
                    tmp+=s[j-1];
                    cnt=1;
                }else{
                    cnt++;
                }
            }
            s=tmp;
        }
        return s;
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends