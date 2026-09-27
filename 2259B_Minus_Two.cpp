#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
     cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
                cin>>arr[i];
                if(arr[i]%2==0){
                 arr[i]%=4;
                }
            else{
                arr[i]%=2;
            }
        }
        // for(int i=0; i<n; i++){
        //          arr[i]%=4;      
        //     }
        int max_ele = 0;
        unordered_map<int,int>mpp;
        for(auto x : arr){
                mpp[x]++;
                max_ele = max(max_ele , mpp[x]);
        }
        cout<<max_ele<<endl;
}
return 0;
}