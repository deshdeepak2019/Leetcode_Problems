class Solution
{
    public:
        bool increasingTriplet(vector<int> &nums)
        {
            int n = nums.size();
            int x = INT_MAX, y = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                if (x >= nums[i])
                {
                    x = nums[i];
                }
                else if (y >= nums[i])
                {
                    y = nums[i];
                }
                else
                {
                    return true;
                }
            }
            return false;
        }
};