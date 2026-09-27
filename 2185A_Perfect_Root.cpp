// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int>arr(n,0);
//         for(int i=0; i<n; i++) cin>>arr[i];
//         cout<<"ans-->> "<<MEX(arr,n)<<endl;
//     }
// return 0;
// }
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1; i<n+1; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
return 0;
}