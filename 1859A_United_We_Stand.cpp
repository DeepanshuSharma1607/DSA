#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    vector<int>b,c;
    int max_ele = *max_element(arr.begin(),arr.end());
 
    for(int i=0;i<n; i++){
        if(arr[i]==max_ele) c.push_back(arr[i]);
        else b.push_back(arr[i]);
    }
    if(b.size()==0) cout<<-1;
    else{
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int x : b) cout<<x<<" ";
        cout<<endl;
        for(int x : c) cout<<x<<" ";
    }
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