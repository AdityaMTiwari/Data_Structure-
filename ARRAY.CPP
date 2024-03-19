
#include <iostream>
#include<limits.h>
using namespace std;


/* bool linearSearch(int a[], int n, int target){
    for(int i=0; i<n; i++){
        if(a[i]==target){
            return true;
        }
    }
        return false;

    
} */
 
 void countzero(int a[],int n){
 int count=0;
for(int i=0; i<n;i++){
   if(a[i]==0){
    count++;
   }
   
   

}
cout<<count;
 }

int main(){
   /*  int a=5;
    cout<<"Address of a: "<<&a<<endl;
    cout<<"Size of a: "<<sizeof(a)<<endl; */

   /*  int a[10];
    int n=10;
    for(int i=0; i<n; i++){
        cout<<"Index:"<<i<<" " ;
        cin>>a[i];
    }
    /* double value */
  /*for(int i=0; i<n; i++){
    cout<<2*a[i]<<endl;;
  }
} */



/* print sum */

/* int a[5];
int n=5;
for(int i=0; i<n; i++){
    cin>>a[i];
}
cout<<"print the all value: ";
for(int i=0; i<n; i++){
    cout<<a[i]<<","<<endl;
}
cout<<"print total sum: ";
int sum=0;
for(int i=0; i<n; i++){
    sum=sum+a[i];
    
}
cout<<sum;
} */


/* linear search */

/* int a[9]={2,5,7,8,9,11,55,66,78};
int m=9;
int n=55;
bool flag=0;
// 0 not found
// 1 found
for(int i=0; i<m; i++){
    if(a[i]==n){

       flag=1;
        break;
    }
}
    if(flag==1){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found:"<<endl;
    }
} */


/* linear search using function */


/* int a[5]={2,5,6,9,10};
int n=5;
int target=9;
bool ans=linearSearch(a,n,target);
if(ans==1){
    cout<<"target found";
}
else{
    cout<<"target not found";
} */
/* int count=0;
for(int i=0; i<n;i++){
   if(a[i]==0){
    count++;
   }
   cout<<count;


} */

int a[5]={1,0,6,0,6}
int n=5;
int c= countzero(a,n);
cout<<c;


}