#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n1;
    cin>>n1;
    if(n1<=1399) cout<<"Division 4"<<endl;
    else if(n1>=1400 && n1<=1599) cout<<"Division 3"<<endl;
    else if(n1>=1600 && n1<=1899) cout<<"Division 2"<<endl;
    else cout<<"Division 1"<<endl;
}
return 0;
}