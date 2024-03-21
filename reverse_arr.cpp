#include<iostream>
using namespace std;
void reverse(int a[], int s, int e){
   if(s>=e){
    return;
   }
    int temp =  a[s];
     a[s] =  a[e];
     a[e] = temp;
   reverse(a, s+1, e-1);
}
void print(int a[], int size){
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";

    }
}
int main(){
    int a[]={2,5, 46,76,8,8,89};
    cout<<"REVERSE ARRAY :"<<endl;
  reverse(a,0,6);
    print(a, 7);

}