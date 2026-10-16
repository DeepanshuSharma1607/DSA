#include <bits/stdc++.h>
using namespace std;
 
bool is_even(int n) {
    return n%2==0;
    }
 
void solve() {
    int n,k;
    cin>>n>>k;
    if(n%k==0){
        cout<<2<<endl;
        cout<<1<<" "<<n-1;
    }
    else {
        cout<<1<<endl;
        cout<<n;
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