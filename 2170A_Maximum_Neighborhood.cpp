#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         int n;
        cin>>n;
        vector<vector<int>> arr(n + 2, vector<int>(n + 2, 0));
        int num=1;
        int ans=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                   arr[i][j]=num++;
              }
            }
            for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
            ans=max(ans,arr[i][j]+arr[i+1][j]+arr[i-1][j]+arr[i][j+1]+arr[i][j-1]);
              }
            }
        cout<<ans<<endl;
    }
    return 0;
}