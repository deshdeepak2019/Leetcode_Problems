//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long maxGcd(int n) {
        if(n==2) return 2;
        if(n==3) return 3;
        vector<int>v;
        int c=0;
        v.push_back(n);
        v.push_back(n-1);
        int cnt=2;
        int a=n-2;
        while(cnt--){
            if(a<=0){
                break;
            }
            if(v.size()==4) break;
         for(int i=0;i<v.size();i++){
             if(__gcd(v[i],a)==1){
                 c++;
             }
         }
         if(c==v.size()){
             v.push_back(a);
             
         }else{
             cnt++;
         }
         c=0;
         a--;
        }
        long long int ans=1;
        for(auto i:v){
            ans=ans*i;
            //cout<<i<<' ';
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.maxGcd(N) << "\n";
    }
}
// } Driver Code Ends