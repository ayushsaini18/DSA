#include<iostream>
using namespace std;
void printmax(int arr[],int n,int i,int &maxi){
    //base case
    if(i>=n){
        return;
    }
   
    //1 case solve krna hai
   if(arr[i]>maxi){
    maxi=arr[i];
   }

   //baki recursion dekhega
    printmax(arr,n,i+1,maxi);

}

int main(){

int arr[8]={10,12,54,85,92,4,7,85};
int n=8;
int i=0;
int maxi=-1;
printmax(arr,n,i,maxi);
cout<<maxi<<endl;

    return 0;
}