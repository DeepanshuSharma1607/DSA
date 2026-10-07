#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<int>st;
    vector<int>res(n+1,0);
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1'){
            st.push(i+1);
        }
        else if(s[i]=='2'){
            if(!st.empty()){
                res[st.top()]=1;
                st.pop();
            }
            else{
                res[i+1]=1;
            }
        }
        else {
            res[i+1]=1;
        }
    }
    int count=0;
    for(int i=1; i<=n; i++){
        if(!res[i]) count++;
    }
    cout<<count<<endl;
    for(int i=1; i<=n; i++){
        if(!res[i]) cout<<i<<" ";
    }
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