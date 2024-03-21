#include<iostream>
using namespace std;
#include "StackUsingArray.cpp"
int main(){
  StackUsingArray<int> s;
  s.push(10);
  s.push(20);
  s.push(40);
  s.push(50);
  s.push(60);
  s.push(700);


  cout<<s.top()<<endl;
  cout<<s.pop()<<endl;
  cout<<s.pop()<<endl;
  cout<<s.pop()<<endl;
  cout<<s.size()<<endl;
  cout<<s.isEmpty()<<endl;
}