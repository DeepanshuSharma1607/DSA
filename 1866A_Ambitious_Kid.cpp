#include<bits/stdc++.h>
using namespace std;
int main(){
    
       int n;
       cin>>n;
       vector<int>arr(n);
       for(int i=0; i<n; i++){
           cin>>arr[i];
           arr[i]=abs(arr[i]);
       }
      int minE=*min_element(arr.begin(),arr.end());
      cout<<minE<<endl;
 return 0;   
}