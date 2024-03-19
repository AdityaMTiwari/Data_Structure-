#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<long long int>tree, long long int m, long long int mid){
    long long int woodSum=0;
    for(long long int i=0; i<tree.size() ; i++){
        if(tree[i]>mid){
            woodSum=woodSum+tree[i]-mid;
        }
       if(woodSum>=m){
            return true;
        }
        /* else{
            return false;
        } */
    }
     return false;
}

long long int maxSawBladheight(vector<long long int>tree, long long int m){
    long long int start, end, ans;
    start=0;
    ans=-1;
    end=*max_element(tree.begin(), tree.end());
    while(start<=end){
        long long int mid=start+(end-start)/2;
        if(isPossible(tree, m ,mid)){
            ans=mid;
           start= mid+1;
        }
        else{
 end=mid-1;  
   }

}
 return ans;
}


int main(){
    long long int n, m;
    cin>>n>>m;
    vector<long long int>tree;
    while(n--){
        long long int height;
        cin>>height;
        tree.push_back(height);
    }
cout<<maxSawBladheight(tree, m)<<endl;
return 0;
}