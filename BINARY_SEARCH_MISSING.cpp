#include<iostream>
using namespace std;
int MissingElement(int a[], int n){
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){

        int mid=start+(end-start)/2;
        int diff=a[mid]-mid;
     
        
        
    
        if(diff==1){
        
            start=mid+1;
        }
        else{
            ans=mid;
            end=mid-1;
        }

    }
   
 return ans+1;
}

int main(){

    int a[]={1,2,3,4,5,6,8,9};
    int n=8;
    int ans1=MissingElement(a,n);
   
    cout<<"Missing Element: "<<ans1<<endl;
}