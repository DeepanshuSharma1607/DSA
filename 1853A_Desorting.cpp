#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    vector<long long>arr(n);
    bool flag = false;
    bool flag_equal = false;
    long long min_diff = INT_MAX;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(i>0){
            if(arr[i]<arr[i-1]){
                flag=true;
            }
            else if(arr[i]==arr[i-1]){
                flag_equal=true;
            }
            min_diff=min(min_diff,arr[i]-arr[i-1]);
        }
    }
    if(flag) cout<<0;
    else if(flag_equal) cout<<1;
    else cout << (min_diff/2)+1;
    
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