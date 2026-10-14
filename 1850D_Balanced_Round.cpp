#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,k;
    cin>>n>>k;
    vector<long long>arr(n);
    for(int i=0;i<n; i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    int count = 1;
    int max_count = 1;
    for(int i=1;i<n; i++){
       if(arr[i]-arr[i-1]<=k){
        count++;
       }
       else{
        count=1;
       }
       max_count=max(max_count,count);
    }
    cout<<n-max_count;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){ 
        solve();
        cout<<endl;
    }
    
    return 0;
}