#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    int one = 0;
    int zero = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==1) one++;
        else zero++;
    }
    if(zero>one) cout<<"Elsie";
    else cout<<"Bessie";
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