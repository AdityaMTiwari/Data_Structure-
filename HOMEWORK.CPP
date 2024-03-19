#include<iostream>
using namespace std;

/* Area of circle */

/* int AreaOfcircle(int n){
 float area=3.14*n*n;
 cout<<"Area of Circle: "<<area<<endl;
 return area;
}
int main(){
    AreaOfcircle(5);
} */

/* Factorial of a number */

/*void FactorialOfNumber(int n){
    int fact=n; 
    for(int i=1; i<n; i++){       
      fact = fact*(n-i);

     }
  cout<<"Factorial  Of Number: "<<fact<<endl;

}
int main(){ 
    FactorialOfNumber(5);
 } */

 /* All Prime 1 to N */

 /* int prime(int n){
 for(int i=2; i<n; i++){
 int j;
  for(j=2;j<i; j++){
      if(i%j==0){   
        break;
         }
  }
          if(j==i){
        cout<<i<<endl;       
    }
  }
 }
int main(){
  prime(5000);
} */


/*  Print all digits of an Integer skip */

/* void Printinteger(int n){
  
for(int i=0; i<n; i++){
  
 if(float==i){
  break;
 }
 else{
  cout<<i<<endl;
 }
}
}
int main(){
  PrintInteger();
}
 */


/* Return a number a using digits */

/* int Countdigits(int n){
  int count=0;
  if(n==0){
    cout<<"only 1 digits:";
  }
  else{
  while(n!=0){
    n=n/10;
      count++;
    }
    cout<<"no. of digits: "<<count;
  }
}

int main(){
  Countdigits(0);
} */

/* Binary represention of a number */

/* int BinaryNumber(int n){
  while(n>0){
    int bnry=n%2;
     cout<<bnry;
     n=n/2;
  }
}
int main(){
  BinaryNumber(9);
} */


/* convert KM to Miles */

/* void KmtoMiles(float n){

  float miles=0.621371;
  
  cout<<"Miles: "<<n*(float)miles;
}
int main(){  
  KmtoMiles(10);
} */

/* count all set bits */

int countsetbit(int n){
int ans=0;
while(n>0){
 if(n&1==1)
  ans++;
  n >>=1;
 
  
}
return ans;
}
int main(){
  int n;
  cin>>n;

 cout<< countsetbit(n);
}