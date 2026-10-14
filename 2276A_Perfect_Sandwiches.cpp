#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a,b;
    cin>>a>>b;
    if(a<=b) cout<<-1;
    else {
        cout<<min(b,a-b);
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