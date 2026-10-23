#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long n,k;
    cin>>n>>k;
    if(n%2==0) cout<<"YES";
    else {
        if(n-k>=0 && (n-k)%2==0) cout<<"YES";
        else cout<<"NO";
    }
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