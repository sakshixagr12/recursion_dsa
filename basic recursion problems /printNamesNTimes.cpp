#include<sbits/stdc++.h>
using namespace std;

void func(int n,int i){
  if(i>n) return;
  cout<<"sakshi"<< " ";
  func(n,i+1);
}
int main(){
  int n =5;
  func(n,1);
  return 0;
}
