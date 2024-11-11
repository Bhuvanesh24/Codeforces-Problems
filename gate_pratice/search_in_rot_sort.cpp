#include <iostream> 
#include <vector> 
using namespace std; 
class Solution { 
public: 
    int searchInRotatedArray(const vector<int>& arr, int key) { 
        int left = 0, right = arr.size() - 1; 
        while (left <= right) { 
            int mid = left + (right - left) / 2; 
            if (arr[mid] == key) return mid; 
            if (arr[left] <= arr[mid]) { 
                if (arr[left] <= key && key < arr[mid]) { 
                    right = mid - 1; 
                } else { 
                    left = mid + 1; 
                } 
            } 
            else { 
                if (arr[mid] < key && key <= arr[right]) { 
                    left = mid + 1; 
                } else { 
                    right = mid - 1; 
              } 
            } 
        } 
        return -1;  
    } 
}; 
int main() { 
    Solution ob; 
    vector<int> arr1 = {50, 10, 20, 30, 40}; 
    cout << ob.searchInRotatedArray(arr1, 10) << endl;  
    return 0; 
} 