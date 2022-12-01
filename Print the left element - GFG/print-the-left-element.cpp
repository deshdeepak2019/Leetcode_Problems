//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#include<bits/stdc++.h>
class Solution{
    public:
    int leftElement(int a[], int n) {
      sort(a,a+n);
      deque<int>dq;
      for(int i=0;i<n;i++){
          dq.push_back(a[i]);
      }
      while(1){
          if(dq.size()==1){
              break;
          }
          dq.pop_back();
          if(dq.size()==1){
              break;
          }
          dq.pop_front();
      }
      return dq.front();
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.leftElement(a, n) << endl;
    }
}

// } Driver Code Ends