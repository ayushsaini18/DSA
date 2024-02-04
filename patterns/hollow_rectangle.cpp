#include<iostream>
using namespace std;
int main(){

int row;
int col;
int r;
cin>>r;
int c;
cin>>c;

//for(int row=0; row<3;row++){
 //   if(row==0 || row==2){
   //     for(int i=0;i<5;i++){
     //       cout<<"*";
       // }
   // }
   // else{
     //   cout<<"*";
       // for(int col=0;col<3;col++){
       //     cout<<" ";
        //}
       // cout<<"*";
   // }
   // cout<<endl;
//}
for(int row=0; row<r;row++){
   if(row==0 || row==r-1){
       for(int col=0;col<c;col++){
           cout<<"*";
        }
    }
    else{
        cout<<"*";
        for(int col=0;col<c-2;col++){
            cout<<" ";
        }
        cout<<"*";
   }
    cout<<endl;
}
    return 0;
}