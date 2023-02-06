class Solution {
public:
  vector<int> sortArrayByParity(vector<int> &A) {
      int j=0;
        for (int i = 0; j < A.size(); j++)
            if (A[j] % 2 == 0) swap(A[i++], A[j]);
        return A;
    }
};