#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
   
   //  for(int row=0; row<n; row++){
       
   //   for(int col=row; col<n; col++){
   //      if(row==1 || row==n-1){
   //          cout<<col+1;
   //   }
    
   //    else if(col==0 || col==n-1){
   //      cout<<col+1;
   //   }
   //   else{
   //      cout<<" ";
   //   }
   //   }
   //   cout<<endl;

   //  }

    /* for(int row=0; row<n; row++){
      for(int col=0; col<row+1; col++){
         cout<<"*";
      }
      for(int col=0; col<n-row-1; col++){
         cout<<" ";
      }
      for(int col=0; col<n-row-1; col++){
         cout<<" ";
      }
      
      for(int col=0; col<row+1; col++){
         cout<<"*";
      }
      cout<<endl;
     }
     for(int row=0; row<n; row++){
      for(int col=0; col<n-row; col++){
         cout<<"*";
      }
      for(int col=0; col<row; col++){
         cout<<" ";
      }
      for(int col=0; col<row; col++){
         cout<<" ";
      }
      for(int col=0; col<n-row; col++){
         cout<<"*";
      }
      cout<<endl;
     }  
     */  
     for(int row=0; row<n; row++){
      for(int col=0; col<row+1; col++){
         cout<<"*";
      }
      for(int col=0; col<n-2*row+2; col++){
         cout<<" ";
      }
      for(int col=0; col<row+1; col++){
         cout<<"*";
      }
      cout <<endl;
     }
     for(int row=0; row<n; row++){
      for(int col=0; col<n-row; col++){
         cout<<"*";
    }
   for(int col=0; col<2*row; col++){
         cout<<" ";
      }
      for(int col=0; col<n-row; col++){
         cout<<"*";
}
cout<<endl;
     }
}