class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       int ans=-1;
        for(int i=arr.size()-1;i>=0;i--){
            int p=arr[i];
            arr[i]=ans;
            ans=max(p,ans);
        }
        return arr;
    }
};