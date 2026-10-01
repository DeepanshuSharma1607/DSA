#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    cin >> t;
    while (t--) {
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        int max_ans=arr[0];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(i==0) max_ans=arr[0];
            else{
                int diff=arr[i]-arr[i-1];
                max_ans=max(max_ans,diff);
            }
        }
        max_ans=max(max_ans,2*(x-arr[n-1]));
        cout<<max_ans<<endl;
    }
    return 0;
}