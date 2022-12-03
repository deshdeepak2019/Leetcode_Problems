//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int wordLadderLength(string start, string target, vector<string>& word) {
        int i, ans=1;
        string s;
        unordered_set<string> st(word.begin(), word.end());
        queue<pair<string, int>> q;
        q.push({start, ans});
        st.erase(start);
        while(q.size()) {
            s=q.front().first; ans=q.front().second; q.pop();
            if(s==target) return ans;
            for(i=0;i<s.size();i++) {
                char original=s[i];
                for(char ch='a';ch<='z';ch++) {
                    s[i]=ch;
                    if(st.find(s) != st.end()) {
                        q.push({s, ans+1});
                        st.erase(s);
                    }
                }
                s[i]=original;
            }
        }
        return 0;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends