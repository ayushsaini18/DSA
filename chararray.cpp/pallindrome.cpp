#include<iostream>
#include<string.h>
using namespace std;
bool chkpallindrome(char name[100]){
    int length=strlen(name);
    int i=0;
    int j=length-1;
    while(i<=j){
        if(name[i]!=name[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}
int main(){

char name[100];
cin>>name;

if(chkpallindrome(name)){

    cout<<"true"<<endl;
}
else{
    cout<<"false"<<endl;
}

    return 0;
}