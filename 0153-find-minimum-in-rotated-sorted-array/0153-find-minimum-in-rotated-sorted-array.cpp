class Solution {
public:
    int findMin(vector<int>& arr) {
        int i=0;
        int j=arr.size()-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(arr[mid]>=arr[i] && arr[i]>arr[j]) i=mid+1;
            else if(arr[mid]<arr[i]) j=mid;
            else j=mid-1;
        }
          return arr[i];
    }
};