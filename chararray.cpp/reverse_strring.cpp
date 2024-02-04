#include<iostream>
#include<string.h>
using namespace std;
int main(){
char name[100];
cin>>name;
int length = strlen(name);

int i=0;
int j=length-1;
while(i<=j){
  swap(name[i],name[j]);
  i++,j--;
 
}
cout<<name<<endl; 

return 0;
}

