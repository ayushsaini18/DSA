#include<iostream>
using namespace std;
int main(){

int row;
int col;

for(int row=0;row<6;row++)
{
    for(int col=0;col<6-row;col++){
        cout<<"*";
    }
    cout<<endl;
}
    return 0;
}

//take n for generic in case of 6