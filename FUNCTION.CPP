#include<iostream>
using namespace std;

//void add(){
   /* int a,b, c;
    cin>>a>>b>>c;
    if(a>b){
        cout<<"max: "<<a<<endl;

    }
    else if(b>c){
        cout<<"max: "<<b<<endl;
    }
    else{
        cout<<"max: "<<c<<endl;
    }*/
   // for(int i=0; i<=20; i++){
   // cout<<"Aditya is Software Developer Engineer (Microsoft)"<<endl;

   /*  int n;
   cin>>n;
    int count =0;
   for(int i=1;i<=n;i++){
    cout<<i<<endl;
    count++;
    cout<<endl;
    }
   cout<<count; */



/* bool ispower(unsigned int x){
    return (!(x&(x-1)));
}
 */
/* void fun(int &num, int k){
    num &=(~(1<<k));
} */
 int fun(int n){
    if(n%4==0) return 0;
        if(n%4==1) return 1;
            if(n%4==2) return n+1;
            else return 0;

 }
    
 

int main(){
/*   int num=7;
  int k=1;
  fun(num,k);
  cout<<num<<endl;
  return 0; */
  fun(56);


}


