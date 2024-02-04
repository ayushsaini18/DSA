#include<iostream>
#include<vector>
using namespace std;
int main(){
int sum=40;
int flag=0;
vector<int>arr{10,20,30,40,50,60,70};
//cout<<"pairs are:-"<<endl;
for(int i=0;i<arr.size();i++){
    int element=arr[i];
    for(int j=i;j<arr.size();j++){
        
      //  cout<<"("<<element<<","<<arr[j]<<")"<<endl;

        if(arr[j]+element==sum){
            cout<<"ans found"<<"("<<element<<","<<arr[j]<<")"<<endl;
            flag=1;
        }
    }
    
}
if(flag==0){
    cout<<"not"<<endl;
}
    return 0;
}