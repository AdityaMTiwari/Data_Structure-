#include<iostream>
using namespace std;

#include<climits>
template<typename T>
class StackUsingArray{
   //privately declared
   T *data;
   int nextIndex;
   int capacity;
  public:
  StackUsingArray(){
    data = new T[4];
    nextIndex=0;
    capacity=4;
  }
  int size(){
    return nextIndex;
  }
  bool isEmpty(){
   /* if(nextIndex==0){
        return true;
    }
    else{
        return false;

    }*/
return nextIndex==0;
  }
  
  void push(T element){
    if(nextIndex==capacity){
      T *newData = new T[2 * capacity];
      for(int i = 0; i < capacity; i++){
        newData[i]=data[i];
      }
      capacity*=2;
      delete []data;
      data = newData;
       // cout<<"stack full"<<endl;
       // return;

    }
    data[nextIndex]=element;
    nextIndex++;
  }
  T pop(){
    if(isEmpty()){
  cout<<"stack is empty"<<endl;
     return 0;
    }
    nextIndex--;
    return data[nextIndex];
  }
  T top(){
    if(isEmpty()){
        cout<<"stack is empty"<<endl;
        return 0;

    }
    return data[nextIndex-1];


  }
};
#include<iostream>
using namespace std;

int main(){
  StackUsingArray<char> s;
  s.push(209);
  s.push(101);
  s.push(102);
  s.push(103);
  s.push(104);
 


  cout<<s.top()<<endl;
  cout<<s.pop()<<endl;
  cout<<s.pop()<<endl;
  cout<<s.pop()<<endl;
  cout<<s.size()<<endl;
  cout<<s.isEmpty()<<endl;
}
