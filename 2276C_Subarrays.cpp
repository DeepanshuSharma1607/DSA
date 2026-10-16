#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n,k;
    cin>>n>>k;
    vector<long long>arr(n+1,0);
    long long sum=0;
    for(int i=1;i<=n; i++){
        long long ele=0;
        cin>>ele;
        arr[i]=arr[i-1]+ele;
    }
    long long count=0;
    vector<int>cnt(k,0);
    for(int j=k; j<n; j++){
        cnt[arr[j-k]%k]++;
        count+=cnt[arr[j+1]%k];
    }
    cout<<count;
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