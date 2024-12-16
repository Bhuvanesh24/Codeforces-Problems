#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;  

        long long count = 0; 

        
        long long power = 1; 

        while (power <= r2) {
       
            long long min_x = max(l1, (l2 + power - 1) / power);  
            long long max_x = min(r1, r2 / power); 

            if (min_x <= max_x) {
                count += (max_x - min_x + 1);  
            }

          
            if (power > r2 / k) break;

        
            power *= k;
        }

        cout << count << endl;
    }

    return 0;
}
