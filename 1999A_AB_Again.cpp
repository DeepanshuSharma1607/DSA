#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a1=n%10;
    n/=10;
    int a2=n%=10;
    cout<<a1+a2<<endl;
}
return 0;
}