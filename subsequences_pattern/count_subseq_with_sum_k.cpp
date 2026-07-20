#include<bits/stdc++.h>
using namespace std;

int printSubSum(int idx,int sum,int k ,int n , vector<int>arr){
    if(idx==n){
        if(sum==k){
            return 1;//a valid subseq has been found
        }
        return 0;// no valid subseq found in  that branch    }
    //take

    sum+=arr[idx];

    int l= printSubSum(idx+1,sum,k,n,arr);
    
    //backtrack
    sum-=arr[idx];
    //dont take
    int r= printSubSum(idx+1,sum,k,n,arr);
        
    return l+r;
}

int main(){
    vector<int>arr={1,2,3,4};
    int n = arr.size();
    int k = 3;
    cout<< printSubSum(0,0,3,n,arr);
    return 0;
}
