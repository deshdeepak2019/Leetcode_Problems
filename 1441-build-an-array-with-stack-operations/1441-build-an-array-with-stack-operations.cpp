class Solution {
public:
    vector<string> buildArray(vector<int>& t, int n) {
        vector<string>v1;
       vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0;i<t.size();i++) mp[t[i]]++;
        for(int i=0;i<n;i++){
           if(mp[i+1]==0){
               v.push_back(0);
           }else{
               v.push_back(i+1);
           }
        }
        for(int i=0;i<t[t.size()-1];i++){
            if(v[i]!=0){
                v1.push_back("Push");
            }else{
                v1.push_back("Push");
                v1.push_back("Pop");
            }
        }
      //  v1.pop_back();
        return v1;
    }
};