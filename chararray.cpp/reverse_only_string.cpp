#include<iostream>
#include<string.h>
using namespace std;

string rev_only_string(string s){

    int i=0;
    
    int j=s.length()-1;

    while(i<j){
        if(isalpha(s[i]) && isalpha(s[j])){
            swap(s[i],s[j]);
            i++,j--;
        }
      else if(!isalpha(s[i])){
        i++;
      }
      else{
        j--;
      }
        
       
    }
    return s;

}

int main(){

string s;
cin>>s;

cout<<rev_only_string(s)<<endl;
    return 0;
}