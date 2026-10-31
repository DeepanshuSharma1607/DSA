#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n1,n2;
    cin>>n1>>n2;
    string s1,s2;
    cin>>s1>>s2;
    int arr[26]={0};
     int arr2[26]={0};
    for(int i=0; i<n1; i++){
        arr[s1[i]-'a']++;
    }
    for(int i=0; i<n2; i++){
        arr2[s2[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(arr[i]<arr2[i]) {cout<<"NO"; return;}
        else{
            arr[i]-=arr2[i];
            arr2[i]=0;
        }
    }
    for(int i=0; i<26; i++){
        if (i == ('s' - 'a') || i == ('i' - 'a') || i == ('x' - 'a')) {
             if (arr[i] != 1) {
                cout << "NO";
                return;
            }
        }
        else if(arr[i]!=0) {
            cout << "NO";
                return;
        }
    }
    cout<<"YES";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
 
    return 0;
}