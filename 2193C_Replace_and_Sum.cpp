#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,q;
cin>>n>>q;
int qu=q;
vector<long long>a(n);
vector<long long>b(n);
for(int i=0; i<n; i++) cin>>a[i];
for(int i=0; i<n; i++) cin>>b[i];
vector<long long>presum(n,0);
for(int i=n-1; i>=0; i--){
    long long val=a[i];
    if(i+1<n){
        val=max(val,a[i+1]);
    }
    val=max(val,b[i]);
    a[i]=val;
}
long long sum=0;
for(int i=0; i<n; i++) {
    sum+=a[i];
    presum[i]=sum;
}
for(int i=0; i<q; i++){
    int l,r;
    cin>>l>>r;
    l--;
    r--;
    if(l==0) cout<<presum[r];
    else cout<<presum[r]-presum[l-1];
    cout<<" ";
}
cout<<endl;
}
return 0;
}