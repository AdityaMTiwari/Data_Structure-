// #include<iostream>
#include <bits/stdc++.h>


using namespace std;

int main(){
//     int n;
//    cout<<"Enter the Number :";
//    cin>>n;
//    if(n==3){
//     cout<<"traingle";
//    }
//    else{
//     cout<<"not traingle";
//    }
    // if(n==0){
    //     cout<<"zero";
    // }
    // else if(n<0){
    //     cout<<"Negative";
    // }
    // else{
    //     cout<<"Positive";
    // }
    // if(n%2==0){
    //     cout<<"No. is even";
    // }
    // else{
    //     cout<<"No. is odd";

    // }
    // cout<<endl;
    // for(int i=0; i<10;i++){
    //     cout<<"SitaRam." <<endl;
    // }
    // int m;
    // cout<<"table:"<<endl;
    // cin>>m;
    // for(int i=m; i<=m*10; i=i+m){
    //     cout<<i<<endl;
    // }
    
    //looping 

    // for(int i=0; i<4;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    
    for(int i=0; i<5; i++){
        for(int j=0;j<5-i;j++){
            cout<<"*";
        }
        cout<<endl;                                     
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i==0){
                cout<<"*";
            }
            else if(j==0||j==4){
                cout<<"*";
            }
            else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
      //cout<<endl;
}