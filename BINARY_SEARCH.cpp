#include<iostream>
using namespace std;
int BinarySearch(int a[], int n, int target){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(a[mid]==target){
            return mid;
        }
        else if(a[mid]<target){
            start=mid+1;
        }
        else if(a[mid]>target){
            end=mid-1;
        }
       mid=(start+end)/2;
        }
return -1;
        }
        
    
    

int main(){
    int a[]={10,20,30,40,50,60,70,80,90};
    int target=70;
    int n=9;
    int midIndex= BinarySearch(a,n,target);
   if(a[midIndex]==-1){
    cout<<"Element not found: "<<endl;
   }
   else{
    cout<<"Element found: "<<midIndex<<endl;
   }
}