#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
const int OFF = 30000;
static vector<int>val(2*OFF+1);
void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    vector<ll>v(n-4);
    for(int i=0; i<n-4; i++){
        v[i]=arr[i]+arr[i+2]-arr[i+4];
    }
    ll count=0;
    for(int i=0; i<n-4; i++){
        count+=val[v[i]+OFF];
        val[v[i]+OFF]++;
    }
    for(int i=0; i<n-4; i++){
        val[v[i]+OFF]=0;
    }
    for(int i=0; i+2<n-4; i++) if(v[i]==v[i+2]) count--;
    for(int i=0; i+4<n-4; i++) if(v[i]==v[i+4]) count--;
 
    cout<<count<<endl;
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