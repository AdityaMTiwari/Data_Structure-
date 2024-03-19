#include<iostream>
using namespace std;

/* TIME COMPLEXCITY O(logn) */

/* FIND THE FIRST OCCURENCE GIVEN ARRAY BY USING BINARY SEARCH */

int BinarySearchr_firstOccurence(int a[], int n, int target){
    int start=0;
    int end=n-1;
    int ans= -1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(a[mid]==target){
             ans= mid;
             end=mid-1;
        }
        else if(a[mid]<target){
            start=mid+1;
        }
        else if(a[mid]>target){
            end=mid-1;
        }
        }
       return ans;
        }
    
    /* FIND THE LAST OCCURENCE GIVEN ARRAY BY USING BINARY SEARCH */

int BinarySearchr_lastOccurence(int a[], int n, int target){
    int start=0;
    int end=n-1;
    int ans= -1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(a[mid]==target){
             ans= mid;
             start=mid+1;
        }
        else if(a[mid]<target){
            start=mid+1;
        }
        else if(a[mid]>target){
            end=mid-1;
        }
        }
       return ans;
        }

        /* FIND THE TOTAL OCCURENCE  */
        int totalOccurence(int a[], int n, int target){
           int FirstOcc= BinarySearchr_firstOccurence(a, n,target);
           int LastOcc= BinarySearchr_lastOccurence(a,n,target);
        int totalOccu=(LastOcc-FirstOcc)+1;
    return totalOccu;
        }
    
    

int main(){
    int a[]={10,20,30,30,30,30,30,30,30,100};
    int target=30;
    int n=10;
    int ans1= BinarySearchr_firstOccurence(a,n,target);
    int ans2= BinarySearchr_lastOccurence(a,n,target);
    int ans3=totalOccurence(a,n,target);
    cout<<"First Occurence: "<<ans1<<endl;
     cout<<"Last Occurence: "<<ans2<<endl;
     cout<<"total Occurence: "<<ans3<<endl;

   }
 
