class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int row=0,col=0;
        bool ok=1;
       vector<int>v(m*n);
        int i=0;
        while(row<m and col<n){
            if(ok){
                while(row>0 and col<n-1){
                v[i++]=mat[row][col];
                row--;
                col++;
            }
            v[i++]=mat[row][col];
            if(col==n-1){
                row++;
            }else{
                col++;
            }
        }else{
                while(col>0 and row<m-1){
                    v[i++]=mat[row][col];
                    row++;
                    col--;
                }
                v[i++]=mat[row][col];
                if(row==m-1){
                col++;
            }else{
                row++;
            }
            }
            ok=!ok;
    }
        return v;
    }
};