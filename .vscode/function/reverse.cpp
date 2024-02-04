#include<iostream>
using namespace std;
int getreverse(int n){
    int reverse=0;
    while(n!=0){
    int r=n%10;
     reverse=reverse*10+r;
    n=n/10;
    }
    return reverse;
}

int main(){
int n;
cin>>n;
int ans=getreverse(n);
cout<<ans<<endl;

    return 0;
}