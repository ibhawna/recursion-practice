// print, all the paths , given -  a n*m matrix filled with 1 at 0*0 and n-1*m-1 positions. rest are filled with 0 or 1. move right and down only to reach n-1,m-1 index from 0,0. move right and down if only that position has 1, otherwise don't move

#include<iostream>
#include<vector>
using namespace std;

string dir[]={"D", "R"};
int dr[] ={1, 0 };
int dc[] = {0, 1};

void findpaths(int r, int c, string s, vector<vector<int>> &vis, vector<vector<int>> &matrix, int n, int m){
    if(r>=n || c>=m || vis[r][c]==1 || matrix[r][c]==0){
        return;
    }
    if(r == n-1 && c ==m-1){
        cout<<s<<endl;
        return;
    }
    
    vis[r][c]=1;
    for(int x =0; x<2; x++){
        s+= dir[x];
        findpaths(r+dr[x], c+dc[x], s, vis, matrix, n, m);
        s.pop_back();
    }
    vis[r][c]=0;


}

int main(){
    int n = 3;
    int m =3;
    vector<vector<int>> matrix = {{1,0,0}, {1,1,0}, {1,1,1}};
    vector<vector<int>> vis(n, vector<int>(m,0));

    findpaths(0, 0, "", vis, matrix, n, m);
}