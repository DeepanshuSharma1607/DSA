#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
const int OFF = 30000;
static vector<int>val(2*OFF+1);
void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>res;
    for(int i = 0;i<n; i++){
        cin>>arr[i];
        if(i==0) res.push_back(arr[i]);
        else
        {if(arr[i]<arr[i-1]) res.push_back(arr[i]);
        res.push_back(arr[i]);}
    }
    cout<<res.size()<<endl;
    for(auto x : res) cout<<x<<" ";
    cout<<endl;
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