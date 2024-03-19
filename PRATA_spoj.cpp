#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int>cookRank, int noOfprata, int mid){
    int countPrata=0;
    for( int i=0; i<cookRank.size() ; i++){
        int R=cookRank[i];
        int j=1;
int takenTime=0;
while(true){
        if(takenTime+R*j<=mid){
            takenTime=takenTime+R*j;
            j++;
            countPrata++;
            //countPrata++;
        }
        
        else{
            break;
        }
    }
    if(countPrata>=noOfprata){
        return true;
    }
    }
     return false;
}

int minTimeCompleteOrder(vector<int>cookRank, int noOfprata){
  int start, end, ans;
    start=0;
    ans=-1;
    int heightrank=*max_element(cookRank.begin(), cookRank.end());
    end=heightrank*(noOfprata*(noOfprata+1)/2);
    while(start<=end){
  int mid=start+(end-start)/2;
        if(isPossible(cookRank, noOfprata ,mid)){
            ans=mid;
           end= mid-1; 

        }
        else{
  start= mid+1; 
   }

}
 return ans;
}


int main(){
    int testCase;
    cin>>testCase;
    while(testCase--){
        int noOfprata, noOfcook;
        cin>>noOfprata>>noOfcook;
        vector<int>cookRank;
        while(noOfcook--){
            int rank; cin>>rank;
            cookRank.push_back(rank);
        }
        cout<<minTimeCompleteOrder(cookRank,noOfprata)<<endl;
    }
    return 0;

}