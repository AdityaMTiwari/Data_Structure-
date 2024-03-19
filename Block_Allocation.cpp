#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

int findPages(int A[], int N){
  int s=0;
  int e=N-1;
  int ans=INT_MIN;
  int leftSum=0;
  int rightSum=0;
  while(s<=e){
    int mid=s+(e-s)/2;
    //loop1
    for(int i=0; i<mid+1; i++){
    leftSum= leftSum+A[i];
  }
  //loop2
    for(int i=mid+1; i<N; i++){
    rightSum=rightSum+A[i];
  }
  int total=min(leftSum, rightSum);
  if(ans>total){
    ans=total;
  }
  
  }
  return ans;
}
int main(){
  int A[]={1,2,3,4,5,6};
  int N=6;
  int ans1=findPages(A,N);
  cout<<ans1;

}