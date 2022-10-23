class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       set<int>s(nums.begin(),nums.end());
        int c=1;
         while(s.find(c)!=s.end()){
            c++;
      }
        int a=0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second==2){
                a=it.first;
                break;
            }
        }
        int b=c;
        return {a,b};
    }
};