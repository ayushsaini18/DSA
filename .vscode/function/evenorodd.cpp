#include<iostream>
using namespace std;

bool checkeven(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
int n;
cin>>n;
bool iseven=checkeven(n);
if(iseven){
    cout<<"even "<<endl;

}
else{
    cout<<"odd"<<endl;
}
    return 0;
}