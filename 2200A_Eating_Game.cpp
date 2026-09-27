#include<bits/stdc++.h>
using namespace std;
int main(){
      
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int maxEle=INT_MIN;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            maxEle=max(arr[i],maxEle);
        }
        int count=0;
        for(int i=0; i<n; i++){
            if(arr[i]==maxEle){
                count++;
            }
        }
        cout<<count<<endl;
    }
return 0;
}