#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    vector<int>arr;
    int i=1;
        while(n>0){
            int rem = n%10;
            if(rem!=0){
                arr.push_back(rem*i);
            }
            i*=10;
            n/=10;
        }
    cout<<arr.size()<<endl;
    for(int x : arr) cout<<x<<" ";
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