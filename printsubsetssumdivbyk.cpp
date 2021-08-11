// print subsets whose sum is divisble by k = 3 arr = {4,3,2}

 #include<iostream>
 #include<vector>
 using namespace std;

 void subsets(int ind, int sum, vector<int> &ds, int arr[], int n, int k){
  
  //  if(ds.size() != 0){
     if(sum % k == 0){
       for(auto it : ds){
       cout<<it<<" ";
       }
        cout<<endl;
        
     }

  //  }
   
   if(ind == n){
     return;
   }
   
   // pick
   ds.push_back(arr[ind]);
   subsets(ind+1, sum+arr[ind], ds,arr, n, k);
   ds.pop_back();
   subsets(ind+1, sum - arr[ind],ds, arr, n, k);

 }
 int main(){
   int arr[3]={4,3,2};
   int n =3;
   int k =3;
   int sum =0;
   vector<int> ds;
   subsets(0, sum, ds, arr, n, k);
 }
