#include<iostream>
using namespace std;

int bs(int a[], int start,int end,int x){

  while(start<=end){
    int mid=start+(end-start)/2;
    if(a[mid]==x){
        return mid;
    }
   else if(a[mid]<x){
        start=mid+1;

    }
    else{
        end=mid-1;
    }
     
  } 
 return -1;
}

int exponetialSearch(int a[], int n,int x){
    if(a[0]==x){
        return x; 
    }
    int i=1;
    while(i<n && a[i]<=x){

        i*=2;
    }
    return bs(a,i/2,min(i,n-1), x);
}
int main(){
    int a[]={1,2,3,4,5,7};
    int n=6;
    int x=8;
    int ans=exponetialSearch(a,n,x);
    if(ans==-1){
        cout<<"Not present: "<<ans;
    }
    else{
        cout<<"present: "<<ans;
    }
        }