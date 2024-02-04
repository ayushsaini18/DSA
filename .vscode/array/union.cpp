#include<iostream>
#include<vector>
using namespace std;
int main(){

int arr[]={10,20,70,40,7};
int brr[]={8,6,7,40};
int sizea=5;
int sizeb=4;

vector<int>ans;

for(int i=0;i<sizea;i++){
    ans.push_back(arr[i]);
     
}

for(int i=0;i<sizeb;i++){
    
    ans.push_back(brr[i]);
   
   
}
cout<<endl;

for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
    return 0;
}