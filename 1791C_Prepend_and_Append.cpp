#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    int j=s.size()-1;
    while(i<=j){
        if(s[i]!=s[j]) {i++; j--;}
        else break;
    }
    cout<<j-i+1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
 
    return 0;
}