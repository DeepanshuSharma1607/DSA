#include <bits/stdc++.h>
using namespace std;
 
void solve() {
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }
   int ans = arr[n-1]-arr[0];
   for(int i=1; i<n; i++){
    ans = max(ans , arr[i]-arr[0]);
   }
   for(int i=0; i<n-1; i++){
    ans = max(ans,arr[n-1]-arr[i]);
   }
   for(int i=0; i<n-1; i++){
    ans = max(ans,arr[i]-arr[i+1]);
   }
   cout<<ans;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
    solve();
    cout << endl;
    }
 
    return 0;
}