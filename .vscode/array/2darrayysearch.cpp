#include <iostream>
using namespace std;

int main() {
  int arr[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin>>arr[i][j];
    }
  }
  cout<<"enter key"<<endl;
  int key;
  cin>>key;
  int flag=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      int element=arr[i][j];
      if (element==key){
        flag=1;
        cout<<"found at:-"<<i<<"row"<<j<<"column"<<endl;
        return 0;
      }
    }
   
  }
if(flag==0){
  cout<<"not found"<<endl;
}
  return 0;
}