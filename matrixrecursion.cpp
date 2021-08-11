#include<iostream>
#include<string>
using namespace std;
 int n, m;
void findpaths(int r, int c, string s){
    if(r>=n || c>=m) return;
    if(c == m-1 &&  r == n-1){
        cout<<s<<endl;
        return;

    }
   
        // right
        s += "R";
        findpaths(r, c+1, s);
        s.pop_back();
        
        //down
       
        s += "D";
        findpaths(r+1, c, s);
        s.pop_back();
    
    
}
int main(){
   
    cin>>m>>n;
    
    findpaths(0, 0, "");



     
}