#include<iostream>
using namespace std;
#include "Fraction_add.cpp"
int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);
   //fraction f3=f1.add(f2);
    //fraction f4=f1+f2;
    //f1.print();
   // f2.print();
    
     f1.print();
     Fraction f3=(++f1);
     f3.print();
     f1.print();



}