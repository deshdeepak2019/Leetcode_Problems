class Solution {
public:
    int maxProfit(vector<int>&v) {
        int mn=v[0],mx=INT_MIN;
        for(int i=0;i<v.size();i++){
            mn=min(mn,v[i]);
            mx=max(mx,v[i]-mn);
        }
        return mx;
    }
};