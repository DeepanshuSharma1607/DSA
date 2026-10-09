#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        long long sum=0;
        long long minval=INT_MAX;
        vector<long long>sec;
        for(int i=0; i<n; i++){
                long long m;
                cin>>m;
                vector<long long>a(m);
                for(int i=0; i<m ;i++){
                        cin>>a[i];
                }
                sort(a.begin(),a.end());
                minval=min(minval,a[0]);
                sec.push_back(a[1]);
        }
        long long smallest_second_smallest=*min_element(sec.begin(),sec.end());
        long long comp_sum = accumulate(sec.begin(),sec.end(),0LL);
        
        long long res = comp_sum-smallest_second_smallest+minval;
        
        
        cout<<res<<endl;
        
    }
 
    return 0;
}