// count, all the paths , given -  a n*m matrix filled with 1 at 0*0 and n-1*m-1 positions. rest are filled with 0 or 1. move right and down, left and up only to reach n-1,m-1 index from 0,0. move right and down, left and  up if only that position has 1, otherwise don't move
 // count path problem in recursion // exponential problem
#include<iostream>
#include<vector>
using namespace std;

string dir[]={"D", "L", "R", "U"};
int dr[] ={1, 0, 0, -1 };
int dc[] = {0, -1, 1, 0};

int findpaths(int r, int c, vector<vector<int>> &vis, vector<vector<int>> &matrix, int n, int m){
    if(r>=n || c>=m || r<0 || c<0|| vis[r][c]==1 || matrix[r][c]==0){
        return 0;
    }
    if(r == n-1 && c ==m-1){
        return 1;
    }
    
    vis[r][c]=1;
    int count  = 0;
    for(int x =0; x<4; x++){
       
        count += findpaths(r+dr[x], c+dc[x], vis, matrix, n, m);
        
    }
    vis[r][c]=0;
    return count;


}

int main(){
    int n = 3;
    int m = 3;
    vector<vector<int>> matrix = {{1,0,0}, {1,1,0}, {1,1,1}};
    vector<vector<int>> vis(n, vector<int>(m,0));

    cout<<findpaths(0, 0, vis, matrix, n, m);
}