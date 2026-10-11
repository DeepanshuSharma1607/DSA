#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    int sum = 0;
    int even = 0;
    int odd  = 0;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        if(arr[i]%2==0) even++;
        else odd++;
    }
    if(odd==0) cout<<"YES";
    else if(even = 0){
        if(odd%2==1) cout<<"YES";
        else cout<<"NO";
    }
    else if(odd%2==0) cout<<"YES";
    else cout<<"NO";
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