class Solution {
public:
     vector<vector<int>> merge(vector<vector<int>>& v) {
         vector<vector<int>>ans;
             sort(v.begin(),v.end());
         vector<int>temp=v[0];
         for(auto it:v){
             if(it[0]<=temp[1]){
                 temp[1]=max(it[1],temp[1]);
             }else{
                 ans.push_back(temp);
                 temp=it;
             }
         }
         ans.push_back(temp);
         return ans;
    }
};