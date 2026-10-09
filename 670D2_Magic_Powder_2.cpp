#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
vector < int > a, b;
int k;
bool solve(ll x) {
    ll need = 0;
    for (int i = 0; i < a.size(); i++) {
        ll ele = x * a[i];
        if (ele > b[i]) {
            need += ele - b[i];
            if (need > k) return false;
        }
    }
    return true;
}
void solve() {
    ll i = 0;
    ll j = (1e9*2)+1;
    while (i < j) {
        int mid = (i + j + 1) / 2;
        if (solve(mid)) i = mid;
        else {
            j = mid - 1;
        }
    }
    cout << i << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    t = 1;
    while (t--) {
        int n;
        cin >> n >> k;
        a.resize(n);
        b.resize(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        solve();
    }
    return 0;
}