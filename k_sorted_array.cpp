#include<iostream>
using namespace std;
#include<queue>
void kSortedArray(int input[], int n,int k){
    priority_queue<int> p;
    for(int i=0; i<k; i++){
        p.push(input[i]);

    }
    int j=0;
    for(int i=k; i<n; i++){
        input[j]=p.top();
        p.pop();
        p.push(input[i]);
        j++;
    }
    while(!p.empty()){
        input[j]=p.top();
        p.pop();
    }
}
int main(){
int input[]={10,12,6,7,9};
int k=3;
kSortedArray(input,5, k);
for(int i=0; i<5;i++){
    cout<<input[i]<<" ";
}
}