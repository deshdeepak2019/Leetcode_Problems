class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        map<map<char,int>,vector<string>>mp;
        int n=str.size();
        for(int i=0;i<n;i++){
           string s=str[i];
        map<char,int>m;
        for(int i=0;i<s.size();i++){
            char c=s[i];
        m[c]++;
        }
        vector<string>curr;
        if(mp.find(m)!=mp.end())
            curr=mp[m];
        curr.push_back(s);
        mp[m]=curr;
        }

        vector<vector<string>>ans;
        for(auto i:mp)
        ans.push_back(i.second);

        return ans;

    }
};