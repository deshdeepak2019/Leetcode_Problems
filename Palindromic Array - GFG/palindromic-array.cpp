//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
  bool isPalin(int n){
      int ans=0;
      int p=n;
      while(n!=0){
          ans=10*ans+n%10;
          n=n/10;
      }
      if(ans==p){
          return true;
      }else{
          return false;
      }
      
  }
    int PalinArray(int a[], int n)
    {
    for(int i=0;i<n;i++){
        if(isPalin(a[i])==0){
            return 0;
        }
    }
    return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends