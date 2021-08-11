// count all subsets whose sum is divisble by k = 3 arr = {4,3,2} but without using count as variable. do it thru recursion

 #include <iostream>
 #include<vector>
 using namespace std;

 int subsets(int ind, int sum, int arr[], int n, int k){
  
  //  if(ds.size() != 0){
     

  //  }
   
   if(ind == n){
     if(sum == k){
       return 1;
     }
     else{
       return 0;
     }

   }
   
   
  //  subsets(ind+1, sum+arr[ind],arr, n, k);
  
  //  subsets(ind+1, sum - arr[ind], arr, n, k);
  sum = sum + arr[ind];
  int l = subsets(ind+1, sum,arr, n, k);
  sum = sum - arr[ind];
  int h = subsets(ind+1, sum, arr, n, k);
  return l+h;



 }
 int main(){
   int arr[4]={4,3,2,2};
   int n =4;
   int k =4;
   int sum =0;
   cout<<subsets(0, sum,  arr, n, k); // as it includes empty subset as welll
 }
// converting it into index wise and then deciding what to do