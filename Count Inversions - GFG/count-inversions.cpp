//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
  public:
  long long int merge(long long arr[],long long int l,long long int mid,long long int r){
     
      long long int inv=0;
      long long int n1=mid-l+1;
      long long int n2=r-mid;
     long long  int a[n1];
     long long  int b[n2];
      for(long long int i=0;i<n1;i++){
          a[i]=arr[l+i];
      }
      for(long long int i=0;i<n2;i++){
          b[i]=arr[mid+i+1];
      }
    long long  int i=0,j=0,k=l;
      while(i<n1 and j<n2){
          if(a[i]<=b[j]){
              arr[k]=a[i];
              k++;
              i++;
          }else{
              arr[k]=b[j];
              inv+=(n1-i);
              k++;j++;
          }
      }
      while(i<n1){
          arr[k]=a[i];
          k++;i++;
      }
      while(j<n2){
          arr[k]=b[j];
          k++;j++;
      }
      return inv;
  }
  long long int mergeSort(long long arr[],long long int l,long long int r){
    
      long long int inv=0;
      if(l<r){
            long long mid=(l+r)/2;
      inv+=mergeSort(arr,l,mid);
      inv+=mergeSort(arr,mid+1,r);
      inv+=merge(arr,l,mid,r);
     
  }
   return inv;
  }
    long long int inversionCount(long long arr[], long long n)
    {
        long long int ans=mergeSort(arr,0,n-1);
        return ans;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends