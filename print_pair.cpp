#include<iostream>
using namespace std;
 
/* int printPair(int a[], int n){
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            cout<<a[i]<<","<<a[j]<<" sum: "<<a[i]+a[j]<<endl;
            
            
        }
    }

} */

/* print triplet */
int printTri(int a[],int n){
    for(int i=0;i<n;i++){

   
    for(int j=0;j<n;j++){
        
 
    for(int k=0;k<n;k++){
        

        cout<<"("<<a[i]<<","<<a[j]<<","<<a[k]<<")"<<endl;
    }
    }
    }
}

int main (){
  int a[6]={1,2,3,4,5,6};
    int n=6;
 int m=printTri(a,n);
 cout<<m;

}