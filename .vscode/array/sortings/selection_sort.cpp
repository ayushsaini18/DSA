#include<iostream>
using namespace std;
int main(){

 int arr[]={8,4,6,2,9,1};
 int size=6;
for(int i=0;i<size-1;i++){
    int min_index=i;
    for(int j=i+1;j<size;j++){
        if(arr[j]<arr[min_index] ){
            min_index=j;
            
        }
    }
    swap(arr[i],arr[min_index]);
}
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}