#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while (t--) {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i=0;
        int cost = 0;
        while(i<n){
            string a = s.substr(i,k);
            bool not_need = false;
            for(int j=0; j<a.size(); j++){
                if(a[j]=='0'){
                    not_need = true;
                    break;
                }
            }
            if(!not_need) cost++;
            i+=k;
        }
        cout<<cost<<endl;
    }
    
    return 0;
}