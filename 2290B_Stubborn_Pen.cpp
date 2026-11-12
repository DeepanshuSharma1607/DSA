#include <bits/stdc++.h>
using namespace std;
 
void solve() {
   int n;
   string s;
   cin>>n;
   cin>>s;
    int cnt = 0;
    char c = 'B';
    for(int i=0; i<n; i++){
        if(c=='R') c='B';
        else c='R';
        if(c!=s[i]){ 
            cnt++;
            c=s[i];
        }
    }
    cout<<cnt;
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