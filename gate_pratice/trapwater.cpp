#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
class Solution { 
public: 
    int rainWaterTrapping(vector<int>& arr) { 
        int n = arr.size(); 
        vector<int> left(n), right(n); 
        left[0] = arr[0]; 
        right[n - 1] = arr[n - 1]; 
        for (int i = 1; i < n; i++) { 
            left[i] = max(left[i - 1], arr[i]); 
        } 
        for (int i = n - 2; i >= 0; i--) { 
            right[i] = max(right[i + 1], arr[i]); 
        } 
        int totalWater = 0; 
        for (int i = 0; i < n; i++) { 
            totalWater += min(left[i], right[i]) - arr[i]; 
        } 
        return totalWater; 
    } 
}; 
int main() { 
    Solution obj; 
    vector<int> arr = {3, 0, 1, 0, 4, 0, 2}; 
    int result = obj.rainWaterTrapping(arr); 
    cout << result << endl;   
    return 0; 
} 

      

 