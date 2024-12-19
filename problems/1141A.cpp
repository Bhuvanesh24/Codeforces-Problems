#include <iostream>
using namespace std;

int transform(int n, int m) {
    if (m % n != 0) {
        return -1;
    }

    int ratio = m / n;
    int moves = 0;

    while (ratio % 2 == 0) {
        ratio /= 2;
        moves++;
    }

    while (ratio % 3 == 0) {
        ratio /= 3;
        moves++;
    }

    if (ratio == 1) {
        return moves;
    } else {
        return -1; 
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    int result = transform(n, m);
    cout  << result << endl;

    return 0;
}
