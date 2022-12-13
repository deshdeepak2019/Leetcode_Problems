class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int>v;
        int sum=0,tot=0;
       for(int i=0;i<nums.size();i++){
           sum+=nums[i];
       }
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i<nums.size();i++){
            if(tot>sum){
                break;
            }
            sum-=nums[i];
            tot+=nums[i];
            v.push_back(nums[i]);
        }
        return v;
    }
};