#include<iostream>
using namespace std;
#include<string.h>
#include "constractor.cpp"
int main(){
    char name[]="sknxks";
    student s1(100, name);
    s1.display();
    student s2(s1);
     s2.name[0]='e';
     s1.display();
     s2.display();
}