#include<iostream>
using namespace std;

int findOccuringElement(int a[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(s==e){
            return s;
        }
        else if(mid & 1){ // odd index
            if(mid-1>=0 && a[mid]==a[mid-1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        else{
            // even index
            if(mid+1<n && a[mid]==a[mid+1]){
                s=mid+2;
            }
            else{
                e=mid;
            }
        }
    }
    return -1;
}
int main(){
    int a[]={6,6,8,8,56,9,9,10,10};
    int n=9;
    int ans1=findOccuringElement(a,n);
    cout<<"Index: "<<ans1<<", Value: "<<a[ans1]<<endl;

}