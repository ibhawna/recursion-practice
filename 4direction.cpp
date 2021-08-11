//rat in a maze
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int n, m;
void findpaths(int r, int c, string s, vector<vector<int>> &vis ){
    if(r>=n || c>=m || r<0 || c<0 || vis[r][c] == 1) return; //out of matrix
    if(r == n-1 && c == m-1){ // when reached required position
        cout<<s<<endl;
        return;                                   
    }
    vis[r][c]=1;

    //RIGHT
    s+= "R";
    findpaths(r, c+1, s, vis );
    s.pop_back();

    //DOWN
    s+= "D";
    findpaths(r+1, c, s, vis);
    s.pop_back();

    //LEFT
    s+= "L";
    findpaths(r, c-1, s, vis);
    s.pop_back();

    //UP
    s+= "U";
    findpaths(r-1, c, s, vis);
    s.pop_back();

    vis[r][c] = 0; // this step is backtracking
 
}
int main(){
    cin>>m>>n;
    // n*m vector is created
    vector<vector<int>> vis(n, vector<int>(m,0));
    findpaths(0,0,"", vis);

}