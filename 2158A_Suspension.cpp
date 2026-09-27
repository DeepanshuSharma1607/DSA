#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,n1,n2;
    cin>>n>>n1>>n2;
    int ans=0;
    ans=(n1/2)+n2;
    if(ans>n) cout<<n<<endl;
    else cout<<ans<<endl;
}
return 0;
}