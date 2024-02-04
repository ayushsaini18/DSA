#include<iostream>
#include<limits.h>
using namespace std;
int getfact(int max){
    int factorial=1;
    for(int i=1;i<=max;i++){
        factorial=factorial*i;
    }
    return factorial;
}

int main() {
int max=-1;

int arr[3][3];
cout<<"enter array"<<endl;
int rows=3;
int cols=3;
for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
    cin>>arr[i][j];
  }
}
for(int i=0;i<rows;i++){

  for(int j=0;j<cols;j++){
    if(arr[i][j]>max){
      max=arr[i][j];
     
    }
  }
 
}
 cout<<"max is"<<max<<endl;

cout<<getfact(max);
  return 0;
}