#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    
    for(int i=0; i<n; i++) cin>>arr[i];
    int ops = 0;
    for(int i=n-2; i>=0; i--){
        while(arr[i]>0 && arr[i]>=arr[i+1]){
            arr[i]/=2;
            ops++;
        }
    }
    for(int i=1; i<n; i++){
        if(arr[i]<=arr[i-1]) {cout<<-1; return;}
    }
    cout<<ops;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin>>t;
    while (t--) {
        solve();
        cout << endl;
    }
 
    return 0;
}