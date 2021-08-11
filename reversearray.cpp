#include <iostream>
using namespace std;

int main() {
  int n = 6;
  int a[6] = {4,6,2,1,7,6};
  int i = 0;
  int j = n-i-1;
  while(i<j){
    int temp = a[i];
    a[i]= a[j];
    a[j]=temp;
    i++;
    j--;

  }
  for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
  }
}