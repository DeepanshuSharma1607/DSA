#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(d<b) cout<<-1;
    else{
    long long res = d-b;
    a+=res;
    b+=res;
    res+=a-c;
    if(a<c) cout<<-1;
    else cout<<res;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
 
    return 0;
}