// Some Important Question

// Ques1) Coins Ques:-you have given coin of 1 and 2 and u have to make 5 then how many minimum coins required to make 5 ;


#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int Solve(vector<int>&arr,int target){
    //Base Case
    
    if(target==0){
        return 0;
    }
    if(target<0){
        return INT_MAX;
    }

    //solve 1 case
    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans=Solve(arr,target-arr[i]);
        if(ans!=INT_MAX)
        mini=min(mini,ans+1);
    }
    return mini;

}

int main(){

vector<int>arr{1,2};
int target=5;
int ans=Solve(arr,target);
cout<<"Answer is:- "<<ans<<endl;
    return 0;
}