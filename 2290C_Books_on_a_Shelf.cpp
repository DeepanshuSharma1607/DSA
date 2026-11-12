#include <bits/stdc++.h>
using namespace std;
 
void solve() {
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }
   if(n==1){ cout<<1<<endl; cout<<arr[0]; return ;}
   sort(arr.begin(),arr.end());
   vector<int>res(n);
   res[n/2] = arr[n-1];
   int i=(n/2)-1;
   int j=(n/2)+1;
   int  k = n-2;
    while (k >= 0) {
        if (i >= 0) {
            res[i] = arr[k];
            i--;
            k--;
        }
        if (j < n && k >= 0) {
            res[j] = arr[k];
            j++;
            k--;
        }
    }
    int ans = 0;
    int min_ = -1;
    int max_ = -1;
    vector<bool>vis(n,false);
    for(int i=0; i<n; i++){
        if(min_<res[i]){
            vis[i]=true;
            min_=res[i];
        }
    }
    for(int i=n-1; i>=0; i--){
        if(max_<res[i]){
            vis[i]=1;
            max_=res[i];
        }
    }
    for(int i=0; i<n; i++){
        if(vis[i]) ans++;
    }
    cout<<ans<<endl;
    for(int x:res){
        cout<<x<<" ";
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
    solve();
    cout << endl;
    }
 
    return 0;
}