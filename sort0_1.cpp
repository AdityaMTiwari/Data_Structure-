#include<iostream>
using namespace std;
void sortZeroOne(int a[],int n){
 // int i=0;
  for(int i=0;i<n;i++){
 if(a[i]==0){
            cout<<a[i];
        }
  }
    
   for(int j=0;j<n;j++){

       if(a[j]==1){
            cout<<a[j];
        }
} 
    }



int main(){
  int a[10]={1,1,0,1,1,0,0,1,1,0};
    int n=10;
 sortZeroOne(a,n);

}