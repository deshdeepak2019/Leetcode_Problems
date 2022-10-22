class Solution {
public:
    vector<string> buildArray(vector<int>& t, int n) {
        vector<string>ans;
      int i = 0;
        for(int j = 1; j <= n; j++){
            if(t[i] == j){
                ans.push_back("Push");
                i++;
                if(i == t.size())
                    break;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            } 
        }
        return ans;
    }
};