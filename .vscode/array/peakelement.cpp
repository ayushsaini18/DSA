#include<iostream>
#include<vector>
using namespace std;
int peakelement(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            
            s=mid+1;

        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){

vector<int>v{1,4,6,10,5,3};
int ans=peakelement(v);
cout<<ans<<endl;
}


    return 0;
}