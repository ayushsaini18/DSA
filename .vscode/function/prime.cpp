#include<iostream>
using namespace std;
bool checkprime(int n){
    int i=2;
    for(i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}
int main(){

int n;
cin>>n;
bool isprime=checkprime(n);
if(isprime){
    cout<<"number is prime"<<endl;
}
else{
    cout<<"not a prime"<<endl;
}
    return 0;
}