#include<iostream>
using namespace std;
bool check(int arr[],int n,int i,int j){
    //base case
    if(i==n-1){
        return false;
    }

    //1 case
    if(i<j){
        return true;
    }

    check(arr,n,i+1,j+1);

    
}
int main(){

int arr[5]={10,20,30,40,50};

int i=0;
int j=1;

int n=5;

bool ans=check(arr,n,i,j);

if(ans==true){
    cout<<"true"<<endl;

}
if(ans==false){
    cout<<"fasle"<<endl;
}
    return 0;
}