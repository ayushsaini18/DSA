#include <iostream>
#include<string>
using namespace std;
bool compareString(string a, string b){
  if(a.length()!=b.length()){
    return false;
  }
  else{
   int j=0;
   for(int i=0;i<a.length();i++){
    if(a[i]!=b[j]){
      return false;
    }
    else{
      j++;
    }
   }
  }
  return true;
}
int main() {
  string str;
  cin>>str;

  cout<<str.length()<<endl;
  cout<<str.empty()<<endl;

  str.pop_back();
  cout<<str.substr(0,3)<<endl;
  cout<<str<<endl;

  string a="ayush";
  string b="ayush";

  cout<<compareString(a,b)<<endl;

  // if(a.compare(b)==0){
  //   cout<<"Exactly same"<<endl;
  // }
  // else{
  //   cout<<"not same"<<endl;
  // }

  string x="aaab";
  string y="aaaa";

  cout<<x.compare(y)<<endl;

   string p="aaaa";
  string q="aaab";

  cout<<p.compare(q)<<endl;

  string sentence="Hello my name is Mega";
  string findString="everyone";
  if(sentence.find(findString)==std::string::npos){

    cout<<"Not Found"<<endl;
  }
  else{
    cout<<sentence.find(findString)<<endl;
  }

  string Message="This is my first Message";
  string word="Hello";

  cout<<Message.replace(0,4,word)<<endl;
  return 0;
}