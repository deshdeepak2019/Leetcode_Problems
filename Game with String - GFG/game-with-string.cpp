//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string str, int k){
        vector<int>v(26,0);
        for(int i=0;i<str.size();i++){
            v[str[i]-'a']++;
        }
        priority_queue<int>pq;
        for(int i=0;i<26;i++){
            pq.push(v[i]);
        }
        while(k--){
            int temp=pq.top();
            pq.pop();
            temp--;
            pq.push(temp);
        }
        int ans=0;
        while(!pq.empty()){
            int temp=pq.top();
            pq.pop();
            ans+=(temp*temp);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends