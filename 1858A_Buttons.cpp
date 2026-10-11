#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long a , b , c;
    cin>>a>>b>>c;
    if(a==b) cout<<(c%2==1?"First":"Second");
    else if(a>b) cout<<"First";
    else  cout<<"Second"; 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        cout<<endl;
    }
    return 0;
}