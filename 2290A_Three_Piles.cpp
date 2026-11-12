#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>arr={a,b,c};
    sort(arr.begin(),arr.end());
    if(arr[1]-arr[0]==1 && arr[2]-arr[1]==1) {cout<<"YES"; return;}
    cout<<"NO"; 
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