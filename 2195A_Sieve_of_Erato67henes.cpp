#include<bits/stdc++.h>
using namespace std;
int main(){
      
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        bool isSS=false;
        bool isOne=false;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==1) isOne=true;
            if(arr[i]==67) isSS=true;
        }
        if(isOne && isSS) cout<<"YES"<<endl;
        else if(isSS) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}
 
 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
      
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int>arr(n);
 
//     }
// return 0;
// }