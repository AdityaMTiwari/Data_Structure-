#include <iostream> 
using namespace std; 
  
int fib(int n) 
{ 
    if(n<=1){
        return n;
        return fib(n-2) + fib(n-1); 
    } 
}

int main()
{
    int n = 9;
    int index=0;
while(index<9){
    cout<<" "<< fib(index);
   index++;
}
}