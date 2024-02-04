#include<iostream>
using namespace std;
int main(){

int arr[]={1,2,3,4,5,6,7,8};
int mid,left,right;
int key;
cin>>key;
int size= 8;
left=0;
right=size-1;

while(left<=right){
    mid=(left+right)/2;
    if(arr[mid]==key){
        cout<<"found at:- "<<mid<<endl;
        return 0;
    }
    else if(arr[mid]>key){
        right=mid-1;
     
    }
    else if(arr[mid]<key){
        left=mid+1;
        
    }
}

cout<<"not found"<<endl;
    return 0;
}