#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        int k1,k2;
        cin>>k1>>k2;
        int q1,q2;
        cin>>q1>>q2;
        int row[]={1,-1,1,-1};
        int col[]={-1,1,1,-1};
        set<pair<int,int>>pos;
        for(int i=0; i<4; i++){
            int l=a*row[i];
            int m=b*col[i];
            pos.insert({l,m});
            pos.insert({m,l});
        }
        vector<vector<int>>new_k_pos;
        for(auto i:pos){
            new_k_pos.push_back({i.first+k1,i.second+k2});
        }
        int count=0;
        for(int i=0;i<new_k_pos.size();i++){
            int c = new_k_pos[i][0];
            int d = new_k_pos[i][1];
            int n_c = q1-c;
            int n_d = q2-d;
            for(auto j:pos){
                int k=j.first;
                int l = j.second;
                if(n_c==k && n_d==l) count++;
            }
        }
        cout<<count<<endl;
    }
 
    return 0;
}