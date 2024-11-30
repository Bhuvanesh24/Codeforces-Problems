#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<vector<int>>mat(5,vector<int>(5));
    int ones_row_idx = -1;
    int ones_col_idx = -1;
    for(int i = 0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> mat[i][j];
            if(mat[i][j]==1){
                ones_row_idx = i+1;
                ones_col_idx = j+1;
            }
        }
    }
    int moves = 0;
    if(ones_row_idx<3) moves+= 3-ones_row_idx;
    else moves += ones_row_idx-3;
    if(ones_col_idx<3) moves+= 3-ones_col_idx;
    else moves+= ones_col_idx-3;

    cout << moves;
    
}