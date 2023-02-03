class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        vector<int>v(nums.size(),0);
        for(int i=nums.size()-1;i>=0;i--){
            if(abs(nums[l])>nums[r]){
                v[i]=nums[l]*nums[l];
                l++;
            }else{
                v[i]=nums[r]*nums[r];
                r--;
            }
        }
        return v;
    }
};