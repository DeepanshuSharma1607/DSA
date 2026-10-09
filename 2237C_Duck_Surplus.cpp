#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve() {
    int n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<n-1; i++){
            while(i<n-1 && arr[i]>arr[i+1]){
            ll ele = arr[i+1];
            swap(arr[i],arr[i+1]);
            arr[i+1]+=ele;
            i++;
        }
    }
    cout<<arr[n-1]<<endl;
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