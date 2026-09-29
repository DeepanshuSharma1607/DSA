#include <bits/stdc++.h>
 
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
 
        string s;
        cin >> s;
        int n0 = count(s.begin(), s.end(), '0');
        int n1 = s.size() - n0;
        int ans=0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0'){
                if (n1 > 0) {
                    n1--;
                }
            else {ans= s.size() - i;
            break;}
            }
         else {
            if (n0 > 0) {
                n0--;
            } else {
                ans= s.size() - i;
                break;
            }
        }
    }
        cout<<ans<<endl;
    }
 
return 0;
}