#include<iostream>
#include<vector>

using namespace std;
int main(){

vector<int>arr{1,0,0,1,2,1,0,1,2,0};

vector<int>ans;
int h,m;
int l=0;h=0;m=arr.size()-1;


while(m<=h){
    if(arr[m]==0){
       int element=0;
      element=swap(arr[l],arr[m]);
    ans.push_back(element);
        l++,m++;
    }
    else if(arr[m]==1){
        l++;
    }
    else{
        h--;
    }
}
for(auto value:arr){
    cout<<value<<endl;
}
    return 0;
}