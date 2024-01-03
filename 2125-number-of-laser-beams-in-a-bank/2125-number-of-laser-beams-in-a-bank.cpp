class Solution {
public:
    int numberOfBeams(vector<string>& str) {
        vector<int> v;
        int ans=0;
        
        for(int i=0;i<str.size();i++)
        {
            int c=0;
            for(int j=0;j<str[i].size();j++)
            {
                if(str[i][j]=='1')
                    c++;
            }
            if(c!=0)
                v.push_back(c);
        }
        
        if(v.size()==1)
        {
            return 0;
        }
        else
        {
            for(int i=1;i<v.size();i++)
            {
                ans+=v[i]*v[i-1];
            }
        }
        
        return ans;
            
    }
};