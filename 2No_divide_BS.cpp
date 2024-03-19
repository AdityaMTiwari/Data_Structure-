/* two number divide using binary searching */
#include<iostream>
using namespace std;
int BinaryDivide(int divisor,int dividend){
    int s=0;
    int e=dividend;
    double ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        mid=s+(e-s)/2;
if(mid*divisor==dividend){
    return mid;
}
else if(mid*divisor<=dividend){
ans=mid;
s=mid+1;
}
else{
    e=mid-1;
}
    }
    return ans;
}
/* double getprecision( int divisor,int dividend,int precision, int tempans){
    double factorial=1;
     double ans=tempans;
    for(double i=0; i<precision; i++){
        factorial=factorial/10;
        
        for(double j=ans; j*j<dividend; j+=factorial){
            ans=j;
        }
    }

return ans;

} */

double morePrecision (int divisor,int dividend, int precision, int tempSol) {
    
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<dividend; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}


int main(){
    int dividend=509;
    int divisor=2;
 int tempSol= BinaryDivide(divisor,dividend);
  cout<<morePrecision(divisor,dividend,5,tempSol);
  
  // Negative number handle ..
  // 'abs' function using negative sign convert positive sign. and condition check negative or positive.
  /*  if(dividend<0 && divisor>0 || dividend>0 && divisor<0){
    tempans=0-tempans;
   }
   cout<<"Print final Ans: "<<tempans;
} */
return 0;
}