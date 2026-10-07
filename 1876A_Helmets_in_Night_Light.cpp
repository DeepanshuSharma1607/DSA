#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    cin >> t; // Comment out if the problem has only 1 test case per file
    while (t--) {
        int n,p;
        cin>>n>>p;
 
        vector<pair<int,int>>a(n);
        for(int i=0; i<n; i++) {
            long long val;
            cin>>val;
            a[i].second=val;
        }
        for(int i=0; i<n; i++) {
            long long val;
            cin>>val;
            a[i].first=val;
        }
        sort(a.begin(),a.end());
        long long ans = p;
        long long p_count = 1;
        for(int i=0; i<n; i++){
            long long cost = a[i].first;
            long long people = a[i].second;
            if(cost<=p){
                long long people_to_take = min(people,n-p_count);
                
                ans+=cost*people_to_take;
                p_count+=people_to_take;
                if(p_count>=n) break;
            }
            else if(cost>p ||p_count>=n){
                break;
            }
        }
        if(p_count<n) ans+=(p*(n-p_count));
        cout<<ans<<endl;
    }
 
    return 0;
}