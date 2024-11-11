#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <climits>  
using namespace std; 
class Solution { 
public: 
    int ChocolateDistribution(vector<int>& arr, int m) { 
        int ans = INT_MAX; 
        sort(arr.begin(), arr.end()); 
        for (int i = 0; i + m - 1 < arr.size(); i++) { 
            int minVal = arr[i]; 
            int maxVal = arr[i + m - 1]; 
            int val = maxVal - minVal; 
            ans = min(ans, val); 
        } 
        return ans; 
    } 
};
int main() { 
    Solution obj; 
    vector<int> arr = {3, 4, 1, 9, 56, 7, 9, 12}; 
    int m = 5; 
    int result = obj.ChocolateDistribution(arr, m); 
    cout << result << endl;   
    return 0; 
} 