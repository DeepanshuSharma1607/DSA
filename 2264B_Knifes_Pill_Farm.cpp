#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    // Special case if m = 1
    if (m == 1) {
        long long max_val = -LLONG_MAX;
        for (int i = 0; i < n; i++) {
            max_val = max(max_val, a[i]);
        }
        cout << max_val << "\n";
        return;
    }
 
    priority_queue<long long> pq;
    long long sum = 0;
 
    // Initialize the first m-1 elements
    for (int i = 0; i < m - 1; i++) {
        pq.push(a[i]);
        sum += a[i];
    }
 
    long long ans = -LLONG_MAX;
 
    // Iterate through possible positions for the last element b_m
    for (int i = m - 1; i < n; i++) {
        // Current score if a[i] is chosen as b_m
        long long current_score = m * a[i] - sum;
        ans = max(ans, current_score);
 
        // Try to include a[i] into our pool of m-1 smallest elements if it's smaller than the max in pq
        if (a[i] < pq.top()) {
            sum -= pq.top();
            pq.pop();
            sum += a[i];
            pq.push(a[i]);
        }
    }
 
    cout << ans << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}