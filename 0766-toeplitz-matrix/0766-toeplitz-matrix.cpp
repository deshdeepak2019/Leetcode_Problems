class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
       int m=matrix.size(),n=matrix[0].size();
        int i=1,j=0;
        while(j<n){
            int k=1,l=j+1;
            while(k!=m&&l!=n)
            if(matrix[k-1][l-1]!=matrix[k][l])
                return false;
            else
                k++,l++;
            j++;      
         }
        while(i<m){
            int k=i,l=1;
            while(k<m&&l<n)
            if(matrix[k-1][l-1]!=matrix[k][l])
                return false;
            else
                k++,l++;
            i++;
        }
        return true;        
    }
};