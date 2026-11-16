#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin>>n;
    if(n%2==1 || n<4) {cout<<-1; return;}
    long long min_=0;
    long long max_=0;
    max_=n/4;
    min_=((n+5))/6;
    
    cout<<min_<<" "<<max_;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
    solve();
    cout << endl;
    }
 
    return 0;
}