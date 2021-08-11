// count all subsets whose sum is divisble by k = 3 arr = {4,3,2} but without using count as variable. do it thru recursion

 #include <iostream>
 #include<vector>
 using namespace std;

 int subsets(int ind, int sum, int arr[], int n, int k){
  
  //  if(ds.size() != 0){
     

  //  }
   
   if(ind == n){
     if(sum % k ==0){
       return 1;
     }
     else{
       return 0;
     }

   }
   
   
  //  subsets(ind+1, sum+arr[ind],arr, n, k);
  
  //  subsets(ind+1, sum - arr[ind], arr, n, k);
   return    subsets(ind+1, sum+arr[ind],arr, n, k)  +  subsets(ind+1, sum - arr[ind], arr, n, k);



 }
 int main(){
   int arr[3]={4,3,2};
   int n =3;
   int k =3;
   int sum =0;
   cout<<subsets(0, sum,  arr, n, k) -1; // as it includes empty subset as welll
 }
// converting it into index wise and then deciding what to do