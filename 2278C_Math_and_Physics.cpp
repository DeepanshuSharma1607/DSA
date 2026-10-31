#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> arr(n);
    long long sum = 0;
    int count_1 = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum+=arr[i];
    }
    if (sum == n) {
        cout << -1;
        return;
    }
    bool found = false;
    for(int i=1; i<n-1; i++){
        if(arr[i]!=1) {found = true; break;}
    }
    if(found) cout<<sum-1;
    else cout<<sum-(n-1);
    }
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
 
    while (t--) {
        solve();
        cout << '\n';
    }
 
    return 0;
}