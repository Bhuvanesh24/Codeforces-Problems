#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
class Solution { 
public: 
    int maxProArray(const vector<int>& arr) { 
        int res = arr[0]; 
        int maxi = arr[0]; 
        int mini = arr[0]; 
        for (size_t i = 1; i < arr.size(); i++) { 
            if (arr[i] < 0) { 
                swap(maxi, mini);
            } 
            maxi = max(maxi * arr[i], arr[i]); 
            mini = min(arr[i], mini * arr[i]); 
            res = max(res, maxi);
        } 
        return res; 
    } 
}; 
int main() { 
    Solution ob; 
    int result = ob.maxProArray({-1, -3, -10, 0, 60}); 
    cout << result << endl;
    return 0; 
} 

 