#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std;
class Solution { 
public: 
    int maximumVolume(const vector<int>& arr) { 
        int left = 0; 
        int right =  arr.size() - 1; 
        int maxVolume = 0; 
        while (left < right) { 
            int width = right - left; 
            int height = min(arr[left], arr[right]); 
            int volume = width * height; 
            maxVolume = max(volume, maxVolume); 
            if (arr[left] <= arr[right]) { 
                left++; 
            } else { 
                right--; 
            } 
        } 
        return maxVolume; }}; 
int main() { 
    Solution ob; 
    int result = ob.maximumVolume({1, 5, 4, 3}); 
    cout << result << endl;   
    return 0; 
} 