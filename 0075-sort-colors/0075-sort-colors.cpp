class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size();
        int l=0,mid=0,r=n-1;
        while(mid<=r){
            switch(arr[mid]){
                case 0:
                    swap(arr[l++],arr[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(arr[mid],arr[r--]);
                    break;
            }
            
        }
    }
};