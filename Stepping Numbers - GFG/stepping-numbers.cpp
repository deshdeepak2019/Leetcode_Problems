//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    int solve(int m){
        queue<int>q;
        // for 0 ->01,012, these number could be formed by 1 itself
        for(int i=1;i<=9;i++){
            q.push(i);
        }
        if(m<0) return 0;
        if(m<10) return m+1;
        int ans = 1;
        while(q.size() > 0){
            int num = q.front();
            q.pop();
            ans++;
            int lastDigit = num%10;
            int num1 = num*10 + lastDigit + 1;
            int num2 = num*10 + lastDigit - 1;
            //lastdigit is 0 only one possible option that is append 1  that is  num1 here
            if(num%10 == 0){
                if(num1<=m) q.push(num1);
            }
            //lastdigit is 9 then only one possible option that is append 8  that is  num2 here
            else if(num%10 == 9){
                if(num2<=m){
                    q.push(num2);
                }
            }
            //in all other case we will have 2 options append lastdigit+1 and lastDigit-1 at end of curr num
            else{
                if(num1<=m)
                q.push(num1);
                if(num2<=m)
                q.push(num2);
            }
        }
        return ans;
    }

    int steppingNumbers(int n, int m)
    {
        // Code Here
        return solve(m) - solve(n-1);
    }
};

//     int steppingNumbers(int n, int m)
//     {
//         // Code Here
//     }
// };


//{ Driver Code Starts.

int main()
{
    Solution obj;
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        cout << obj.steppingNumbers(n,m) << endl;
    }
	return 0;
}


// } Driver Code Ends