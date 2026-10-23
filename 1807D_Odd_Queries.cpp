#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n,q;
    cin>>n>>q;
    vector<long long>arr(n+1);
    vector<long long>pre(n+1,0);
    long long sum = 0;
    for(int i=1; i<=n; i++){
       cin>>arr[i];
       sum+=arr[i];
       pre[i]=sum;
    }
    while(q--){
        long long l,r,k;
        cin>>l>>r>>k;
        long long num = 0;
        // for(long long i=l; i<=r; i++){
        //     num+=arr[i];
        // }
        // long long res = sum-num;
        // res+=k*(r-l+1);
        num = pre[r]-pre[l-1];
        long long res = sum-num;
        res += k*(r-l+1);
        if(res%2==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){ 
        solve();
        // cout<<endl;
    }
    
    return 0;
}