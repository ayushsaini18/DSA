#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
bool check(string str,int i,int n,char key,vector<int>&number,int &count){
    //base case
    if(i>=n){
        return false;
    }

    //1 case
    if(str[i]==key){
       
     //   number.push_back(i);
       count++;
    }

   return check(str,i+1,n,key,number,count);
    
}
int main(){

string str="ayushsaini";

int n=str.length();
int i=0;
char key='a';
int count=0;
vector<int>number;
bool ans=check(str,i,n,key,number,count);

cout<<count<<endl;

cout<<"key is :- "<<ans<<endl;
for(auto val:number){

    cout<<val<<" ";
    
}

}