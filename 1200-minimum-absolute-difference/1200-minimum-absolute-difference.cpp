class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>v;
         sort(arr.begin(),arr.end());
        int ans=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            ans=min(ans,(arr[i+1]-arr[i]));
        }
       
        for(int i=0;i<arr.size()-1;i++){
            int p=arr[i+1]-arr[i];
            if(p==ans){
            v.push_back({arr[i],arr[i+1]});
            }
        }
        return v;
    }
};