#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class BooleanMatrix {
public:
    void modifyMatrix(vector<vector<int>>& mat, int M, int N) {
        vector<int> row(M, 0);  
        vector<int> col(N, 0);  
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (mat[i][j] == 1) {
                    row[i] = 1;  
                    col[j] = 1; 
                }
            }
        }
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (row[i] == 1 || col[j] == 1) {
                    mat[i][j] = 1; 
                }
            }
        }
    }
};
int main() {
    vector<vector<int>> mat1 = {{1, 0}, {0, 0}};
    vector<vector<int>> mat2 = {{0, 0, 0}, {0, 0, 1}};
    BooleanMatrix obj;
    obj.modifyMatrix(mat1, mat1.size(), mat1[0].size());
    obj.modifyMatrix(mat2, mat2.size(), mat2[0].size());
    cout << "Modified mat1:" << endl;
    for (const auto& row : mat1) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    cout << "Modified mat2:" << endl;
    for (const auto& row : mat2) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
