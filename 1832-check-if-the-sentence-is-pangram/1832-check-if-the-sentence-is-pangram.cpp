class Solution {
public:
    bool checkIfPangram(string str) {
//         unordered_map<char,int>mp;
//         for(int i=0;i<str.size();i++){
//             mp[str[i]]++;
//         }
//         for(int i=0;i<26;i++){
//             char a='a'+i;
//             if(mp[a]==0){
//                 return 0;
//             }
//         }
        
        unordered_set<char>st(str.begin(),str.end());
        if(st.size()==26){
            return 1;
        }
        return 0;
    }
};