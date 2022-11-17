class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        if(n==2) return "11";
        string s="11";
        int cnt=1;
        for(int i=3;i<=n;i++){
            string tmp="";
            s+="$";
            for(int j=1;j<s.size();j++){
                if(s[j]!=s[j-1]){
                    tmp+=to_string(cnt);
                    tmp+=s[j-1];
                    cnt=1;
                }else{
                    cnt++;
                }
            }
            s=tmp;
        }
        return s;
    }
};