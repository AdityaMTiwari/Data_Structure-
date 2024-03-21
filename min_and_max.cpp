#include<iostream>
using namespace std;

void findminmax(int a[],int n){
    int min=a[0];
    int max=a[0];
    for(int i=1; i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        cout<<min;
    }
      cout<<max;
    for(int i=0; i<n;i++){
        if(a[i]<min){
            min=a[i];
        } 
}
cout<<min<<endl;
}
int main(){
    int a[]={2,3,46,5,7};
    findminmax(a,5);
    cout<<findminmax;
}