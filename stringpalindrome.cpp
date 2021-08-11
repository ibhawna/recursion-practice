#include<iostream>
#include<string>
using namespace std;
 bool ispalindrome(string s, int l,int h){
    
    if(l>=h){
      return true;
    }
    if(s[l] == s[h]){
      l++;
      h--;
      return ispalindrome(s, l, h);
    }
    else{
      return false;
    }

  }
int main(){
  string s;
  cin>>s;
  int l =0; 
  int h = s.length()-1;
  cout<<ispalindrome(s,l,h);
 
}