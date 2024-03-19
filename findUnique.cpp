#include<iostream>
using namespace std;
int findUnique(int a[], int n){
    int ans=0;
    /* using XOR */
    for(int i=0; i<n; i++){
        ans=ans^a[i];
            }
           return ans;
        }

    

int main(){
int a[5]={1,2,1,2,4};
int n=5;
int ans=findUnique(a,n);
cout<<"find unique: "<<ans;
}