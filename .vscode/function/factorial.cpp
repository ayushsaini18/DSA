#include<iostream>
using namespace std;
int getfact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int main(){

int n;
cin>>n;
int ans=getfact(n);
cout<<"Factorial is:-"<<ans;
    return 0;
}