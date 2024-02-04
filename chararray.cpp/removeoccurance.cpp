#include<iostream>
using namespace std;
int main(){

string str;
cin>>str;

string part;
cin>>part;
int pos=str.find(part);
while(pos!=string::npos){
    str.erase(pos,part.length());
    pos=str.find(part);
}
cout<<str<<endl;

    return 0;
}