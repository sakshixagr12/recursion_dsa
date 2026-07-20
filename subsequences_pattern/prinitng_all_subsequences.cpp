#include<bits/stdc++.h>
using namespace std;

void printSub(int idx,int n, vector<int>&ds,vector<int>arr) {
    if(idx==n) {
        //printing the subsequences
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    //take
    ds.push_back(arr[idx]);
    printSub(idx+1,n,ds,arr);
    //not take
    ds.pop_back();
    printSub(idx+1,n,ds,arr);
}

int main(){
    vector<int>arr={1,2,3,4};
    int n=arr.size();
    vector<int>ds;
    printSub(0,n,ds,arr);
    return 0;
}

// time complexity O(2^n * n);
// 2^n subsequences
// printing each subsequences can take upto O(n)
