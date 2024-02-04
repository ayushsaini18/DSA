#include<iostream>
using namespace std;

int getsum(int n){
int sum=0;
    for(int i=2;i<=n;i++){
        
        if(i%2!=0){
            
            continue;
            
        }
        else{
        
            sum=sum+i;
            
        }
        
    }
  
    return sum;
}
int main(){
    cout<<"enter n:- ";
int n;
cin>>n;

int ans=getsum(n);
cout<<"answer is:-"<<endl;
cout<<ans;

    return 0;
}