#include<bits/stdc++.h>
using namespace std;
void printcombinations(char set[], vector<string> &s, int k, int n){
    
    
    if(k==0){
        for(auto i :  s){
            cout<<i;
        }
        cout<<endl;
    }
    for(int i =0; i<n; i++){
        string newstr;
        s.push_back(set[i]);
        printcombinations(set, s, k-1, n );
    }
    // s.push_back(s1);
    // printcombinations(ind+1, s1, s2, s, k);
    // s.pop_back();
    // s.push_back(s2);
    // printcombinations(ind + 1, s1, s2, s, k);


}
int main(){
    // string s1 = "a";
    // string s2 = "b";
    // int k = 3;
    // vector<string> s;
    // int ind = 0;
    int k =3;
    char set[]={'a','b'};
    vector<string> s;
    printcombinations( set, s, k, 2 );
}