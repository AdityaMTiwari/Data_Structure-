#include<iostream>
using namespace std;
#include "static.cpp"
int main(){
    student s1;
    //cout << s1.age <<" "<< s1.rolln <<endl;
   //cout << student::totalstudent<<endl;
   // s1.totalstudent=20;
    student s2,s3,s7,s8;
  //  cout << s2.totalstudent<<endl;
    cout  << student::gettotalstudent()<<endl; 
}