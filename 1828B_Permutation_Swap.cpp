#include <bits/stdc++.h>
#include <numeric>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>arr(n+1);
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    int k=abs(arr[1]-1);
    for(int i=1;i<=n; i++){
        k = __gcd(k, abs(arr[i] - i));
    }
    cout<<k;
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