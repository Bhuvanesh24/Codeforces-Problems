#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> res;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        int left = -1, right = -1;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                if (left == -1) {
                    left = i;
                }
                right = i;
            }
        }

       
        if (left == -1) {
            res.push_back(0);
            continue;
        }

        int cnt = 0;
        for (int i = left; i <= right; ++i) {
            if (s[i] == '0') {
                cnt++;
            }
        }

        res.push_back(cnt);
    }


    for (int num : res) {
        cout << num << endl;
    }

    return 0;
}
