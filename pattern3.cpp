#include <iostream>
using namespace std;v

int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(j <=n+1-i){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    cout<<"\n";
  }
  return 0;
}