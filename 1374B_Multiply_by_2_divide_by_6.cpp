#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin>>n;
    bool flag = false;
    int count = 0;
    unordered_map<int,int>mpp;
    while(n!=1){
        if(n%6==0){
            if(mpp.find(n/6)!=mpp.end()){
                    flag = true;
                    break;
            }
                mpp[n/6]=1;
            n=n/6;
        }
        else{
        if(mpp.find(n*2)!=mpp.end()){
                    flag = true;
                    break;
            }
                mpp[n*2]=1;
            n*=2;
        }
    count++;}
 
    if(flag) cout<<-1;
    else cout<<count;
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