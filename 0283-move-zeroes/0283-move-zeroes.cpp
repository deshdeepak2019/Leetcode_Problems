class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[k++]=nums[i];
            }
        }
        cout<<k;
        int p=nums.size()-k;
        while(p--){
            nums[k++]=0;
        }
    }
};