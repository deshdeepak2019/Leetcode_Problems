class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tsum=0,sum=0;
        tsum=accumulate(nums.begin(),nums.end(),tsum);
        for(int i=0;i<nums.size();i++){
            if(2*sum==tsum-nums[i]){
                return i;
            }
            sum+=nums[i];
        }
        return -1;
    }
};