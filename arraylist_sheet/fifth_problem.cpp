#include<iostream>
#include<vector>

using namespace std;


class Solution {
  private:
  int merge(vector<int>&arr,int left,int mid,int right){
    vector<int>Sorted;

    int inversionCounts=0;
    
    int leftPointer=left; int rightPounter=mid+1;

    while(leftPointer<=mid&&rightPounter<=right){

        if(arr[leftPointer]<=arr[rightPounter]){
            Sorted.push_back(arr[leftPointer]); leftPointer++;
        }
        else{
            Sorted.push_back(arr[rightPounter]); rightPounter++;
             inversionCounts+=(mid-leftPointer+1);
        }
    }

    while(leftPointer<=mid){  /// if there is rest from the comparison
        Sorted.push_back(arr[leftPointer]); leftPointer++;
    }

    while(rightPounter<=right){  /// if there is rest from the comparison
        Sorted.push_back(arr[rightPounter]); rightPounter++;
    }

    for(int i=0;i<Sorted.size();i++){ ///copy the sorted values to original array
        arr[left+i]=Sorted[i];
    }
    
    return inversionCounts;
  }

  int mergeSort(vector<int>&arr,int left,int right){

    int inversionCounter=0;

    if(left!=right){
        int mid=left+(right-left)/2;

       inversionCounter+= mergeSort(arr,left,mid);
       inversionCounter+= mergeSort(arr,mid+1,right);

        inversionCounter+=merge(arr,left,mid,right);
    }
    return inversionCounter;
  }
  public:
    int inversionCount(vector<int> &arr) {
         mergeSort(arr,0,arr.size()-1);
    }
};