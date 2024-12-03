#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int num : a) {
        vector<int> ans;
        int multiplier = 1;
        
        while (num > 0) {
            int digit = num % 10;
            if (digit != 0) {
                ans.push_back(digit * multiplier);
            }
            multiplier *= 10;
            num /= 10;
        }
        
        cout << ans.size() << endl; 
        for (int summand : ans) {
            cout << summand << " ";
        }
        cout << endl;
    }
    return 0;
}
