#include <bits/stdc++.h>
using namespace std;
void solve() {
    int a,b,n;
    cin>>a>>b>>n;
    vector<long long>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    long long sec=b;
    for(int i=0; i<n; i++){
        if(arr[i]>=a) sec+=a-1;
        else sec+=arr[i];
    }
    cout<<sec;
    
}
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
 
    int t;
    cin >> t;  
    while (t--) {
        solve();
        cout<<endl;
    }
    return 0;
}