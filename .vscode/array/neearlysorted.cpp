#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>vrr , int target){
    int s=0;
    int e=vrr.size();
    int mid=s+(e-s)/2;
    
    while(s<=e){
        if(vrr[mid]==target){
            return mid;
        }
        if(vrr[mid-1]>=s  &&vrr[mid-1]==target){
            return mid-1;
        }
        if(vrr[mid+1]<=s && vrr[mid+1]==target){
            return mid+1;
        }

        if(target>vrr[mid]){
            s=mid+2;
        }
        else{
            e=mid-2;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}


int main(){
int target=70;
vector<int>arr{10,3,40,20,50,80,70};
int ans=binarysearch(arr,target);
cout<<"ans is:- "<<ans<<endl;

    return 0;
}