#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;while(t--){
	    int n; cin>>n;
	    int k; cin>>k;
	    int arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    reverse(arr,arr+n);
	    reverse(arr,arr+n-k);
	    reverse(arr+n-k,arr+n);
	    for(int i=0;i<n;i++) cout<<arr[i]<<' ';
	    cout<<endl;
	}
	return 0;
}