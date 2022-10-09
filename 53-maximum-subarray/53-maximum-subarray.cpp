class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx=INT_MIN;
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum=sum+nums[i];
        if(maxx<sum) maxx=sum;
        if(sum<0) sum=0;
    }
    return maxx;  
    }
};