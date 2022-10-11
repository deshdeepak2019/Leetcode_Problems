//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        stack<char>st;
        string res,ans;
        // for(int i=s.size()-1;i>0;i--){
        //     if(s[i]!='[' or isdigit(s[i])==0){
        //     st.push(s[i]);
        //     }
        //     if(isdigit(s[i])){
        //                  int n=s[i]-'0'-1;
        //                  for(int i=0;i<n;i++){
        //                      ans+=ans;
        //                  }
        //              }
        //     if(s[i]='['){
        //         while(st.top()!=']' and st.size()>=0){
        //             // if(isalpha(st.top())){
        //             //      ans+=st.top();
        //             //  }
        //             // st.pop();
        //             ans+=st.top();
        //             st.pop();
        //         }
        //         if(st.top()=']' and st.size()>0){
        //         st.pop();
        //         }
        //     }
        //  }
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(s[i]==']'){
                while(st.size()>0 and st.top()!='['){
                    ans=st.top()+ans;
                    st.pop();
                }
                if(st.size()!=0){
                    st.pop();
                }
                string n;
                while(st.size()>0 and st.top()>='0' and st.top()<='9'){
                    n=st.top()+n;
                    st.pop();
                }
                int digit=stoi(n);
                string temp=ans;
                for(int j=0;j<digit-1;j++){
                    ans=temp+ans;
                }
                for(int j=0;j<ans.size();j++){
                    st.push(ans[j]);
                }
                ans="";
            }else{
                st.push(s[i]);
            }
        }
        ans="";
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        //reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends