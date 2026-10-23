#include <bits/stdc++.h>
#include <numeric>
using namespace std;
void solve() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        x=n+1-x;
        cout<<x<<" ";
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