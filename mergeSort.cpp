#include<bits/stdc++.h>
using namespace std;


void merge(int low, int mid, int high,vector<int>&arr) {
    int i=low;
    int j = mid+1;
    vector<int>temp;
    while(i<=mid&&j<=high){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=high){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void mergeSort(int low,int high, vector<int>&arr) {
    if(low>=high) return;
    int mid=low+(high-low)/2;
    mergeSort(low,mid,arr);
    mergeSort(mid+1,high,arr);
    merge(low,mid,high,arr);
}




int main(){
    vector<int>arr={2,5,1,2,1,1,90,5,45,8};
    int n = arr.size();
    mergeSort(0,n-1,arr);
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}
