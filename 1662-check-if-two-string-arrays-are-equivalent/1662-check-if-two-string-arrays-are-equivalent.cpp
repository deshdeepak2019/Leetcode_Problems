class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        string s1,s2; 
        for(int i=0;i<w1.size();i++){
            s1+=w1[i];
        }
        for(int i=0;i<w2.size();i++){
            s2+=w2[i];
        }
        // sort(s1.begin(),s1.end());
        // sort(s2.begin(),s2.end());
        return s1==s2;
    }
};