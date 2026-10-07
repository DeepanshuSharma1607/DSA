#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve() {
    int x,y,r;
    cin>>x>>y>>r;
    int val = r*r;
    int x_res;
    int y_res;
    for(int i = -35; i<=35; i++){
        bool found=false;
        for(int j=-35; j<=35; j++){
            int x_val = x-i;
            int y_val = y-j;
            if((x_val*x_val)+(y_val*y_val)==val){
                x_res = i;
                y_res = j;
                found=true;
                break;
            } 
        }
        if(found) break;
    }
    cout<<x_res<<" "<<y_res<<endl;
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