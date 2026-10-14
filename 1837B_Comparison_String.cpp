#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,k;
    cin>>n;
    vector<char>arr(n);
    int count=1;
    int max_count=1;
    for(int i=0;i<n; i++) {
        cin>>arr[i];
        if(i>0 && arr[i-1]==arr[i])count++;
        else count=1;
        max_count=max(max_count,count);
    }
    cout<<max_count+1;
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