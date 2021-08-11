// short code for rat in a maze

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int n, m;
string dir[]= {};
int dr[] = {};
int dc[] = {}; // explaination : striver recursion series or refer notes
void findpaths(int r, int c, string s, vector<vector<int>> &vis){
    // base condition //out of matrix, already visited

    if( r>= n || c>=m || r<0 || c<0 || vis[r][c] == 1){
        return;
    }

    // base condition when it reaches last index and printing final paths
    if(r == n-1 && c == m-1){
        cout<<s<<endl;
        return;
    }
    vis[r][c] = 1; // marking
    for(int x = 0; x<4; x++){
        s+=  dir[x];
        findpaths(r+dr[x], c+dc[x], s, vis);
        s.pop_back();
    }
    vis[r][c] = 0; //backtracking // unmarking when we return and go to chose other path

}


int main(){
    cin>>n>>m;
    vector<vector<int>> vis(n, vector<int>(m, 0));
    findpaths(0, 0, "", vis);
}