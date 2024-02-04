#include<iostream>
#include<vector>
using namespace std;
int firstocc(vector<int>arr,int target){
int s=0;
int e=arr.size()-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
    if(arr[mid]==target){
        ans=mid;
        //left me search
        e=mid-1;
    }
    else if(target<mid){
        e=mid-1;
    }
    else if(target>mid){
        s=mid+1;
    }
    mid=s+(e-s)/2;
}
return ans;
}


int main(){

vector<int>v{1,3,3,3,4,4,4,4,6,7};
int target=3;
int indexoffirstocc=firstocc(v,target);
cout<<"ans is "<<indexoffirstocc<<endl;


    return 0;
}