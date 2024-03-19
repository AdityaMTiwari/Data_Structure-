#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

//   for(int i=0; i<n; i++){
//    for(int j=0; j<n-i-1; j++){
//         cout<<" ";
//     }
//     for(int j=1; j<i+1; j++){
        
//         cout <<j;

//     }
//     cout<<endl;

//   }
// for(int row=0; row<n; row++){
//     for(int col=0; col<n-row; col++){
      
// if(row==0 || row==n-1){
//     cout<<"*";
// }

//     else{
//         if(col==0 || col== n-row-1){
//         cout<<"*";

//     }
        
    
//         cout<<" ";
//     }
        
// }
// cout<<endl;

// }
for(int row=0; row<n; row++){
     for(int col=0; col<row+1; col++){
        if(row==0 || row==n-1){
            cout<<col+1;
}
     }

for(int col=0; col<row; col++){
    if(col==0 || col==row+1){
        cout<<col+1;
    }
}
    cout<<" ";
    cout<<endl;
     }
    
}


