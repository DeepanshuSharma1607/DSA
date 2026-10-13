#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin>>n;
    long long i=1;
    while(n%i==0){
        i++;
    }
    cout<<i-1;
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