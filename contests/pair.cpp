#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int k;
    cin >> k; 
    vector<int> values(k);
    for (int i = 0; i < k; i++) {
        cin >> values[i]; 
    }

   
    for (int n = 1; n <= sqrt(k); n++) {
        if (k % n == 0) {
            int m = k / n;
            cout << n << " " << m << endl;
            return 0;
        }
    }

    return 0;
}
