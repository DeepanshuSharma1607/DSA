#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long n , k , x;
    cin>>n>>k>>x;
    long long smallest_sum = (k*(k+1))/2;
    long long largest_sum = ((n-k)*(n-k+1))/2;
    long long sum = (n*(n+1))/2;
    long long max_sum = sum-largest_sum;
    
    if(max_sum<x) cout<<"NO"<<endl;
    else if(x<smallest_sum) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
}
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
 
    int t;
    cin >> t;  
    while (t--) {
        solve();
    }
    return 0;
}