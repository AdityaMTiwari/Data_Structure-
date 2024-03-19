#include<iostream>
#include<limits.h>
using namespace std;
int positiveAndnegative(int a[], int n){
  int j=0;
 
    for(int i=0; i<n; i++){

        if(a[i]<0){
         swap(a[i], a[j]);
         j++;
        }
     
        }
}



int main(){
int a[5]={1,-9,7,-8,-3};
int n=5;
positiveAndnegative(a,n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}