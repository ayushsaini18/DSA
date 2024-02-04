#include<iostream>
using namespace std;
int main(){

int a;
cin>>a;
int *ptr=&a;

int ans= *ptr*(*ptr);
cout<<ans<<endl;

    return 0;
}