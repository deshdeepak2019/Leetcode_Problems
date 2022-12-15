//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

class Solution {
  public:
    string BalancedString(int n) {
        int p=n;
        string str="1abcdefghijklmnopqrstuvwxyz";
        string ans;
        int sod=0;
        while(p!=0){
            sod=sod+p%10;
            p=p/10;
        }
        if(n%2==0){
            
            while(n!=0){
                if(n<=26){
                int s=n/2;
                //n=n-s;
                int e=26-n/2+1;
                //n=n-s;
                for(int i=1;i<=s;i++){
                    ans+=str[i];
                }
                for(int i=e;i<=26;i++){
                    ans+=str[i];
                }
                 n=0;
            }else{
                n=n-26;
                int s=13;
                //n=n-s;
                int e=14;
                //n=n-s;
                for(int i=1;i<=s;i++){
                    ans+=str[i];
                }
                for(int i=e;i<=26;i++){
                    ans+=str[i];
                }
            }
           
            }
        }else{
            if(sod&1){
                while(n!=0){
                    if(n<=26){
                int s=(n-1)/2;
                int e=26-(n+1)/2+1;
                for(int i=1;i<=s;i++){
                    ans+=str[i];
                }
                for(int i=e;i<=26;i++){
                    ans+=str[i];
                }
                 n=0;
            }else{
                n=n-26;
                int s=12;
                //n=n-s;
                int e=13;
                //n=n-s;
                for(int i=1;i<=s;i++){
                    ans+=str[i];
                }
                for(int i=e;i<=26;i++){
                    ans+=str[i];
                }
            }
                }
            }else{
                 while(n!=0){
                    if(n<=26){
                int s=(n+1)/2;
                int e=26-(n-1)/2+1;
                for(int i=1;i<=s;i++){
                    ans+=str[i];
                }
                for(int i=e;i<=26;i++){
                    ans+=str[i];
                }
                 n=0;
            }else{
                n=n-26;
                // int s=10;
                // //n=n-s;
                // int e=17;
                // //n=n-s;
                for(int i=1;i<=26;i++){
                    ans+=str[i];
                }
                // for(int i=e;i<=26;i++){
                //     ans+=str[i];
                // }
            }
                }
            }
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
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends