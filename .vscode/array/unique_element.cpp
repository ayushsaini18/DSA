#include<iostream>
#include<vector>
using namespace std;
int findunique(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
    ans=ans^arr[i];
    
    }
    return ans;

}

int main(){
int n;
cout<<"enter number of elements in array"<<endl;
cin>>n;
vector<int>arr(n);
cout<<"enter elements of array"<<endl;
for(int i=0;i<arr.size();i++){
    cin>>arr[i];
}
int unique_element=findunique(arr);
cout<<"unique element is:- "<<unique_element<<endl;
    return 0;
}