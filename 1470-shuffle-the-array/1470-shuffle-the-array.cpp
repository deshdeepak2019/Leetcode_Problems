class Solution {
public:
    vector<int> shuffle(vector<int>& dd, int n) {
        int p=0,q=0;
        // vector<int>v(dd.begin(),dd.begin()+n);
        // vector<int>v1(dd.begin()+n,dd.end());
        // vector<int>v2;
        // for(int i=0;i<2*n;i++){
        //     if(i%2==0){
        //         v2.push_back(v[p]);
        //             p++;
        //     }else{
        //         v2.push_back(v1[q]);
        //         q++;
        //     }
        // }
        // return v2;
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(dd[i]);
            v.push_back(dd[i+n]);
        }
        return v;
    }
};