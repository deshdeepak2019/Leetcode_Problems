class Solution {
public:
    string breakPalindrome(string str) {
        if(str.size()==1){
            return "";
        }
        // }
        // char c1;
        // char ans;
        // int i=0,j=0;
        // for(i=0;i<str.size()-1;i++){
        //     char c=str[i];
        //     for(j=i+1;j<str.size();j++){
        //         c1=str[j];
        //         if(c1<c){
        //             ans=c1;
        //             cout<<c1;
        //         }
        //     }
        // }
        // // cout<<i<<' '<<j<<endl;
        // // string str1;
        // // str1.push_back(ans);
        // // return str1;
        // for(int i=0;i<str.size();i++){
        //     if(str[i]>ans){
        //         str[i]=ans;
        //         break;
        //     }
        // }
        // return str;
        for(int i=0;i<str.size()/2;i++){
            if(str[i]!='a'){
                str[i]='a';
                return str;
            }
        }
        str[str.size()-1]='b';
        return str;
    }
};