#include<iostream>
using namespace std;
int main(){
  int i;
  for(i=0;i<4;i++){
      for(int j=4;j>=4-i;j--){
        cout<<"*";
       }
      cout<<"\n";
  }
}