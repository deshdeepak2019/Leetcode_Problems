class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        vector<int>p(n),a(n);
        int mx=0;
        for(int i=0;i<n;i++){
            mx=max(mx,arr[i]);
            a[i]=mx;
        }
        mx=0;
        for(int i=n-1;i>=0;i--){
           mx=max(mx,arr[i]);
            p[i]=mx;
        }
        int ans=0;
        for(int i=0;i<n;i++){
           ans+=(min(a[i],p[i])-arr[i]);
        }
        return ans;
    }
};