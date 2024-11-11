#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
class MaxSubArrSum { 
public:
    static int solver(const vector<int>& nums) { 
        int cursum = nums[0]; 
        int maxsum = nums[0]; 
        for (size_t i = 1; i < nums.size(); i++) { 
            cursum = max(nums[i], cursum + nums[i]); 
            maxsum = max(cursum, maxsum); 
        } 
        return maxsum; 
    } 
}; 
int main() { 
    vector<int> nums = {2, 3, -8, 7, -1, 2, 3};
    cout << MaxSubArrSum::solver(nums) << endl; 
    return 0; 
} 