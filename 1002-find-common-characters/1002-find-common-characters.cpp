class Solution {
public:
    vector<string> commonChars(vector<string>& words) {        
        vector<int>freq(26,INT_MAX);
        for(int i=0;i<words.size();i++){
            vector<int>nfreq(26,0);
            for(auto c:words[i]){
                nfreq[c-'a']++;
            }
                for(int j=0;j<26;j++){
                    freq[j]=min(freq[j],nfreq[j]);
                }
            }
        for(int i=0;i<26;i++) cout<<freq[i]<<" ";
        vector<string>ans;
        for(int i=0;i<26;i++){
            while(freq[i]--){
                ans.push_back(string(1,i+'a'));
            }
        }
        return ans;
    }
};