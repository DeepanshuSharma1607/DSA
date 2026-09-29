#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
       int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        bool is_need = false;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(i>0 && arr[i-1]>arr[i]) is_need=true;
        }
        if(is_need && k>1 || !is_need) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}