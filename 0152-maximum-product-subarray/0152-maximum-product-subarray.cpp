class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int curr=1;
        int mxp=0;
        for(int i=0;i<n;i++){
            curr=curr*nums[i];
            mxp=max(mxp,curr);
            if(curr==0){
                curr=1;
            }
        }
        curr=1;
        for(int i=n-1;i>=0;i--){
            curr=curr*nums[i];
            mxp=max(mxp,curr);
            if(curr==0){
                curr=1;
            }
        }
        return mxp;
    }
};