#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n,k;
    scanf("%d%d",&n,&k);
    vector<int>arr(n);
    for(int i=0; i<n; i++) scanf("%d",&arr[i]);
 
    unordered_map<int,int>mpp;
    vector<pair<int,int>>res;
    int i=0;
    int j=0;
    while(j<n){
        if(mpp.size()<k){
            mpp[arr[j]]++;
        }
        else{
            mpp[arr[j]]++;
            if(mpp.size()>k){
                while(mpp.size()>k){
                    mpp[arr[i]]--;
                    if(mpp[arr[i]]==0){
                        mpp.erase(arr[i]);
                    }
                    i++;
                }
            }
        }
        res.push_back({i,j});
        j++;
    }
    int a = 0;
    int b = 0;
    int max_diff=0;
    for(auto it : res){
        int one = it.first;
        int two = it.second;
        int diff = it.second-it.first;
        if(diff>max_diff){
            max_diff = max(max_diff,diff);
            a=it.first;
            b=it.second;
        }
    }
    printf("%d %d",a+1,b+1);
    
}
int main() {
    // ios::sync_with_stdio(false); 
    // cin.tie(nullptr);
 
    int t=1;
    // cin >> t;  
    while (t--) {
        solve();
        printf("\n");
    }
    return 0;
}