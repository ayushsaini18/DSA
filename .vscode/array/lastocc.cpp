#include<iostream>
#include<vector>
using namespace std;
int lasttocc(vector<int>arr,int target){
int s=0;
int e=arr.size()-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
    if(arr[mid]==target){
        ans=mid;
        //rightt me search
        s=mid+1;
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

vector<int>v{1,2,2,2,4,4,4,4,6,7};
int target=4;
int indexoflastocc=lasttocc(v,target);
cout<<"ans is "<<indexoflastocc<<endl;


    return 0;
}