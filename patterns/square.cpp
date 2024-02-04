#include<iostream>
using namespace std;
int main(){

    int row;
    int col;

    for(int row=0;row<4;row++) //outer loop observe row
        {
        for(int col=0;col<4;col++)//inner loop obsereve col
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}