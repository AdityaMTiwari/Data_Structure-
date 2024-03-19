#include<iostream>
#include<limits.h>
using namespace std;
 void min(int a[], int n){

 
int min=INT_MAX;
for(int i=0;i<n; i++){
    if(a[i]<min){
        min=a[i];
    }
    
}
cout<<min;
 }

int main(){

    int a[5]={1,8,5,9,0};
    int n=5;
    min(a,n);
 }
