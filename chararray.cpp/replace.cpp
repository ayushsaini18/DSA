#include<iostream>
#include<string.h>
using namespace std;
void replacespace (char name[]){
    int length=strlen(name);
    
    for(int i=0;i<length;i++){
        if(name[i]==' '){
            name[i]='@';
        }
    }
}

int main(){

char name[100];
cin.getline(name,50);
replacespace(name);
cout<<name<<endl;

    return 0;
}
