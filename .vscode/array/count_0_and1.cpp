#include<iostream>
using namespace std;
int main(){

int arr[5]={1,0,0,1,0};
int size=5;
int numzero=0;
int numone=0;

for(int i=0;i<size;i++){

    if(arr[i]==0){
        numzero++;
    }
    else{
        numone++;
    }
}
cout<<"number of zeros is "<<numzero<<endl;
cout<<"number of ones is "<<numone<<endl;
    return 0;
}