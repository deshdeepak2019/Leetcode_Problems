class Solution {
public:
    vector<int> shuffle(vector<int>& dd, int n) {
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(dd[i]);
            v.push_back(dd[i+n]);
        }
        return v;
    }
};