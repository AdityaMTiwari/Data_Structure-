#include<iostream>
using namespace std;

void reverse(int a[], int n){
    int left=0;
    int right=n-1;
    while(left<right){
       swap(a[left],a[right]);
       left++;
       right--;

     }
     for(int i=0; i<n; i++){
        cout<<a[i]<<",";
     }
     
}

int main(){

    int a[5]={1,8,5,9,0};
    int n=5;
    reverse(a,n);
 }