#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;

bool isvowel(char ch){
     ch=tolower(ch);
    return ch == 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}

string rev_vowel(string s){
    
    int i=0;
    int j=s.length()-1;

    while(i<j){
      
        if(isvowel(s[i]) && isvowel(s[j])){
            swap(s[i],s[j]);
            i++;
            j--;  
        }
        else if( isvowel(s[i])==0){
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

cout<<rev_vowel(s)<<endl;

    return 0;
}