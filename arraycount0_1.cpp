#include<iostream>
 using namespace std;

 void countZero_One(int a[], int n){
    int countZero=0;
    int countOne=0;
   for(int i=0; i<n; i++){
    if(a[i]==0){
        countZero++;

    }
    else if(a[i]==1){
        countOne++;
    }
   }
   cout<<countZero<<endl;
   cout<<countOne<<endl;
 }
 int main(){
    int a[10]={1,5,0,1,0,1,1,6,0,5};
    int n=10;
    countZero_One(a,n);
 }