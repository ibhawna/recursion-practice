#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int key, int low, int high){
  
    
         int mid = low + ((high - low)/2);
  if(high>=low){
    
    return mid;

  }
        if(arr[key] ==  mid){
              return mid;
             }   
  
  else if(arr[key]>mid){
  
    return binarysearch(arr,n, key, mid+1, high);
    
  }
  else if(arr[key]<mid){
    return binarysearch(arr,n, low, key, mid-1);
  
  }
  
  else{
    return -1;
  }
}
int main(){
  int arr[] = {4,5,6,7,8,2,1,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int low, high;
  int mid;
 
  int key = 5;
  int res = binarysearch(arr, n, key, 0, n-1);
  cout<<res;


  }