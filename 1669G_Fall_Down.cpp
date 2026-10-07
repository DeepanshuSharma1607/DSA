#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<char>>matrix(n,vector<char>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char ch;
            cin>>ch;
            matrix[i][j]=ch;
        }
    }
    for(int j=0; j<m; j++){
        int i=n-1;
        int k=n-1;
        while(k>=0 && i>=0){
            if(matrix[i][j]!='.') {
                i--; 
                continue;}
 
            if(k>i) k=i;
 
            while(k>=0 && matrix[k][j]=='.'){
                k--;
            }
            if(k<0) break;
            if(k>=0 && matrix[k][j]=='o') {i=k-1; k--;}
                
            else if(k>=0 && matrix[k][j]=='*'){
                matrix[i][j]='*';
                matrix[k][j]='.';
                k--;
                i--;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}