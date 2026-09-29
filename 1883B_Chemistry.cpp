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
        string s;
        cin>>s;
        if(k==0 && n==1) cout<<"YES"<<endl;
        else{
            unordered_map<char,int>mpp;
            for(char ch : s) mpp[ch]++;
            int no_odd=0;
            for(auto it : mpp){
                if(it.second%2==1){
                    no_odd++;
                }   
            }
            if(no_odd>k+1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
 
return 0;
}