#include<iostream>
using namespace std;
  
  void inplaceHeaapSort(int pq[], int n){
    for(int i=1; i<n; i++){

          int childindex= i;
        while(childindex>0){
        int parentindex= (childindex-1)/2;
        if(pq[parentindex]>pq[childindex]){
            int temp= pq[childindex];
            pq[childindex]=pq[parentindex];
            pq[parentindex]=temp;
        }
        else{
            break;
        }
        childindex=parentindex;
    }
    }
    //remove element
    int size=n;
while(size>1){
    int temp=pq[0];
    pq[0]=pq[size-1];
    pq[size-1]=temp;
     size--;
     int parentindex=0;
        int leftChildindex= 2*parentindex+1;
        int rightChildindex=2*parentindex+2;
        while(leftChildindex<size){
            int minindex=parentindex;
            if(pq[minindex]>pq[leftChildindex]){
                minindex=leftChildindex;

            }
            if(rightChildindex<size && pq[rightChildindex]<pq[minindex]){
                minindex=rightChildindex;
            }
            if(minindex==parentindex){
                break;
            }
            int temp= pq[minindex];
            pq[minindex]=pq[parentindex];
            pq[parentindex]=temp;

            parentindex=minindex;
            leftChildindex=2*parentindex+1;
            rightChildindex=2*parentindex+2;

        }
}
  };
  int main(){
    int input[]={5,1,2,0,8};
    inplaceHeaapSort(input,5);
    for(int i=0; i<5;i++){
        cout<<input[i]<<" "; 
    }
    cout<<endl;

  }