#include<iostream>
 #include <vector>
using namespace std;
void print(vector<int> &v){
    int n=v.size();
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}
void selectionSort(vector<int> &v){
        int n=v.size();
      for(int i=0; i<n-1; i++){
        int minIdx=i;
        for(int j=i+1; j<n; j++){
            if(v[j]<v[minIdx]){
                minIdx=j;
                
            }
        }
        swap(v[i], v[minIdx]);
      }
}
int main(){
vector<int> v={5,4,3,2,1};
selectionSort(v);
print(v);

}