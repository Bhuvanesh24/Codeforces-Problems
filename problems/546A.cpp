#include <iostream>
using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w;
    
    int totalCost = k * (w * (w + 1) / 2);
    
    int borrowAmount = totalCost - n;

    if (borrowAmount < 0) {
        borrowAmount = 0;
    }
    
    cout << borrowAmount << endl;
    return 0;
}
