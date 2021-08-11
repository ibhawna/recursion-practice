#include<iostream>
using namespace std;
int countf(int ind, int arr[], int sum, int n)
{
    if(sum == 0) return 1; // not necessary as for next index it will get non picked as sum already equals to zero
    if(ind == n){
        if(sum == 0 )


        {
            return 1;
        }
        return 0;
    }
    int left =0;
    int right = 0;
    //pick ing particular index
    if(arr[ind]<=sum){
        // sum will decrease
        sum -= arr[ind];
        left = countf(ind, arr, sum, n);
        // sum will restore
        sum += arr[ind]; // jab return karte h toh previous par sum increase hoga jitne se decrease hua okay
    }
    //non pick moving to next index
    right = countf(ind+1, arr, sum, n);
    return left + right;
}
