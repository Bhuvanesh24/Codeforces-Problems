#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    int max_ele = INT_MIN, min_ele = INT_MAX;
    int max_idx = -1, min_idx = -1;


    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        if (nums[i] > max_ele) {
            max_ele = nums[i];
            max_idx = i;
        }
        if (nums[i] <= min_ele) {
            min_ele = nums[i];
            min_idx = i;
        }
    }

    
    int moves = 0;
    if (max_idx < min_idx) {
        
        moves = max_idx + (n - 1 - min_idx);
    } else {
        
        moves = max_idx + (n - 1 - min_idx) - 1;
    }

    cout << moves << endl;
}
