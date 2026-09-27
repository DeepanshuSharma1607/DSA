#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n,0);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int maxEle=*max_element(arr.begin(),arr.end());
 
        cout<<n*maxEle<<endl;
    }
return 0;
}