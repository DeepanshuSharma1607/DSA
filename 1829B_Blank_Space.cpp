#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    int max_len = 0;
    int num = 0;
    for(int i=1; i<=n; i++){
        int ele ;
        cin>>ele;
        if(ele==0){
            num++;
        }
        else{
            num=0;
        }
        max_len = max(num,max_len);
    }
    
    cout<<max_len;
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