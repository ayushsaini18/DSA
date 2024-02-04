#include<iostream>
#include<string.h>
using namespace std;
bool chkpallindrome(string s ,int i,int j){

    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
        
    }
    return true;
}
 bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;

        while(i<=j){
            if(s[i]!=s[j]){
                return chkpallindrome(s,i+1,j)||chkpallindrome(s,i,j-1);
            }
            else{
                i++;
                j--;
            }
           
        }
        return true;
    }
int main(){

string s;
cin>>s;
if(validPalindrome(s)){
    cout<<"true"<<endl;
}
else{
    cout<<"false"<<endl;
}

   
    return 0;
}