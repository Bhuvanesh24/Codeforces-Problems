#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
class Solution { 
public: 
    void mergeOverlap(const vector<vector<int>>& intervals) { 
        vector<vector<int>> sorted_intervals = intervals; 
        sort(sorted_intervals.begin(), sorted_intervals.end(), [](const vector<int>& a, const vector<int>& b) { 
            return a[0] < b[0]; 
        }); 
        vector<vector<int>> res; 
        res.push_back(sorted_intervals[0]); 
        for (int i = 1; i < sorted_intervals.size(); i++) { 
            vector<int>& last = res.back(); 
            const vector<int>& curr = sorted_intervals[i]; 
            if (curr[0] <= last[1]) { 
                last[1] = max(curr[1], last[1]); 
            } 
           else { 
                res.push_back(curr); 
            }
        } 
        for (const auto& interval : res) { 
            cout << "[" << interval[0] << ", " << interval[1] << "] "; 
        } 
        cout << endl; 
    } 
}; 
int main() { 
    Solution obj; 
    obj.mergeOverlap({{1, 3}, {2, 4}, {6, 8}, {9, 10}}); 
    return 0; 

} 