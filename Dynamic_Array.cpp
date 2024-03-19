#include<iostream>
using namespace std;

int print(int a[], int n){
    cout<<"print array: "<<endl;
    for(int i=0; i<n;i++){
        cout<<a[i]<<endl;

    }
}

int main(){
    int n;
    cin>>n;

    int *a= new int[n];
    //print(a,n);
    for(int i=0; i<n;i++){
        int data;
        cin>>data;
        a[i]=data;
    }
  print(a,n);


}