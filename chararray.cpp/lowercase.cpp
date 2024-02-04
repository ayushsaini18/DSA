#include<iostream>
#include<string.h>
using namespace std;
int main(){

char name[100];
cin>>name;
int i=0;
int n=strlen(name);
for(int i=0;i<n;i++){
    if(name[i]>='A'&&name[i]<='Z')
  name[i]= name[i] - 'A' + 'a';
   
}
cout<<name<<endl;
    return 0;
}