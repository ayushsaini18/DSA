#include<iostream>
using namespace std;

Add(int a, int b){
    int sum;
    sum=a+b;
    return sum;
}

int main(){
    
int a;
cin>>a;
int b;
cin>>b;
int solution= Add(a,b);
cout<<solution;
    return 0;
}