#include<iostream>
using namespace std;
 void extream(int a[],int n){
    int left=0;
    int right=n-1;
    while(left<=right){
        if(left==right){
            cout<<a[left];
        }
        else{
        cout<<a[left]<<endl;
        cout<<a[right]<<endl;
        }
        left++;
        right--;
    }
    }
 

int main(){

    int a[5]={1,8,5,9,0,};
    int n=5;
    extream(a,n);
 }