#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<char>> grids(n,vector<char>(m,'.'));
    int snake_idx = m-1;
    for(int i = 0;i < n;i++){
        if(i%2==0){
            for(int j =0;j<m;j++){
                grids[i][j] = '#';
            }
        }
        else{
            grids[i][snake_idx] = '#';
            snake_idx = m - 1 - snake_idx;
        }    
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cout << grids[i][j];
        }
            cout << endl;
        }
}