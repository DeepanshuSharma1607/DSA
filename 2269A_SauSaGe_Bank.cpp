#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long n , k ;
    cin>>n>>k;
    long long ans = ((k-1)*2)+(1ll<<(n-(k-1)));
    cout<<ans<<endl;
}
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
 
    int t;
    cin >> t;  
    while (t--) {
        solve();
    }
    return 0;
}