#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(n==1){
        if(arr[0]==0) cout<<0;
        else cout<<1;
        return;
    }
    int cnt = 0;
    int i=0;
    int j=n-1;
    while(arr[i]==0) i++;
    while(arr[j]==0) j--;
    if(j<i) {cout<<0; return;}
    int min_ = INT_MAX;
    int max_ = INT_MIN;
    for(i=i; i<=j; i++){
        min_ = min(min_,arr[i]);
    }
    if(min_==0) cout<<2;
    if(min_>0) cout<<1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
    solve();
    cout << endl;
    }
 
    return 0;
}