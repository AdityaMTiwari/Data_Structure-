/* function call by value and call by reference */


/*  call by value */
 #include<iostream>
using namespace std;
int incre(int m){
    m=m+1;
    return m;
 }
int main(){
int n;
cin>>n;
 n=incre(n);
cout<<"n: "<<n;
} 
 
/* call by reference */
/*  void incre(int &k){
    k=k+1;

 }
 int main(){
    int x;
    cin>>x;
    incre(x);
    cout<<x;
    
 } */