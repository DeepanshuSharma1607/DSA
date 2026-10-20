#include <bits/stdc++.h>
using namespace std;
 
bool is_even(int n) {
    return n%2==0;
    }
 
void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    int count_neg=0;
    int count_pos=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]<0) count_neg++;
        else count_pos++;
    }
    int count=0;
    while(count_neg>count_pos || count_neg%2!=0) {
        count++;
        count_neg--;
        count_pos++;
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