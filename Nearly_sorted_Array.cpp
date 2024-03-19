#include<iostream>
using namespace std;

int nearlySorted(int a[],int n, int target){
    int start=0;
    int end=n-1;
    //int ans=-1;
     int mid=start+(end-start)/2;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(a[mid]==target){
            return mid;
        }
        else if(mid+1<n && a[mid+1]==target){
            return mid+1;
        }
        else if(mid-1>=0 && a[mid-1]==target){
            return mid-1;
        }
        else if(a[mid]>target){
            end=mid-2;
        }
        else{
            start=mid+2;
        }
    }
    return -1;

}
int main(){
    int a[]={20,10,30,50,40,70,60};
    int n=7;
    int target=40;
    int ans1=nearlySorted(a,n,target);
    if(ans1==-1){
        cout<<"Element not found:"<<endl;
    }
    else{
        cout<<"Element found:"<<ans1<<endl;
    }
}