#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int>arr{1,2,4,6,8,10};
vector<int>brr{3,4,5,6};
vector<int>ans;

for(int i=0;i<arr.size();i++){
    for(int j=0;j<brr.size();j++){
       
        if(arr[i]==brr[j]){
            int value=-1;
            brr[j]=value;
            ans.push_back(value);
              }
        
    }
    ans.push_back(arr[i]);
    
}
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}

    return 0;
}