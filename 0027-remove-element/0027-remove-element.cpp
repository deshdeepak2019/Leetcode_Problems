class Solution {
public:
    int removeElement(vector<int>& nums, int k) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=k){
                nums[j++]=nums[i];
            }
        }
        return j;
    }
};