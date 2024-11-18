#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t; 
    vector<int> ans;

    while (t--) {
        int n;
        cin >> n; 
        vector<int> a(n);
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int score = 0;
        for (auto& p : freq) {
            score += p.second / 2; 
        }

        ans.push_back(score);
    }


    for (int num : ans) {
        cout << num << endl;
    }

    return 0;
}
