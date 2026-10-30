#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long n;
    cin>>n;
    long long ops=0;
    vector<long long>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==1) {arr[i]++; ops++;}
    }
   for(int i=0; i<n-1; i++){
    if(arr[i+1]%arr[i]==0) {arr[i+1]++; ops++;}
   }
    for(int x : arr) cout<<x<<" ";
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