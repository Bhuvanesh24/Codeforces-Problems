#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class LongestCommonPrefix {
public:
    static string longestCommonPrefix(vector<string>& arr) {
        if (arr.empty()) {
            return "-1";
        }
        sort(arr.begin(), arr.end());

        string first = arr[0];
        string last = arr[arr.size() - 1];
        int i = 0;
        while (i < first.length() && i < last.length() && first[i] == last[i]) {
            i++;
        }
        string prefix = first.substr(0, i);
        return prefix.empty() ? "-1" : prefix;
    }
};
int main() {
    vector<string> arr = {"geeksforgeeks", "geeks", "geek", "geezer"};
    cout << "Longest Common Prefix: " << LongestCommonPrefix::longestCommonPrefix(arr) << endl;
    return 0;
}
