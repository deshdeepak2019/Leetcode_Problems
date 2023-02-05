class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) { 
        int n=nums.size();
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            v[nums[i]-1]=1;
        }
        nums.clear();
        for(int i=0;i<n;i++){
            if(v[i]!=1){
                nums.push_back(i+1);
            }
        }
        return nums;
    }
};