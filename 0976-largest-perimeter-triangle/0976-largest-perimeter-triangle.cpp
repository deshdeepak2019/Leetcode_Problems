class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]+nums[i+1]>nums[i+2]){
                ans=max(ans,nums[i]+nums[i+1]+nums[i+2]);
            }
        }
        return ans;
    }
};