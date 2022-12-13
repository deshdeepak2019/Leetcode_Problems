class Solution {
public:
    int heightChecker(vector<int>& num) {
        vector<int>v=num;
        int cnt=0;
        sort(v.begin(),v.end());
        for(int i=0;i<num.size();i++){
            if(num[i]!=v[i]){
                cnt++;
            }
        }
        return cnt;
    }
};