#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve() {
    int n,l;
    cin>>n>>l;
    vector<double>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    bool not_zero = 0;
    bool not_last = 0;
    double diff = 2*max(arr[0],l-arr[n-1]);
    for(int i=1; i<n; i++){
        diff=max(diff,arr[i]-arr[i-1]);
    }
    
    cout<<fixed<<setprecision(9)<<(double)diff/2<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}