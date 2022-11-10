class Solution {
public:
    string removeDuplicates(string s) {
        string str;
        str.push_back(s[0]);
        for(int i=1;i<s.size();i++){
            str.push_back(s[i]);
            //cout<<str<<endl;
            if(str.size()>=2){
                if(str[str.size()-1]==str[str.size()-2]){
                    str.pop_back();
                    str.pop_back();
                }
        }
        }
        return str;
    }
};