#include <iostream>
#include <string>
#include <set>
using namespace std;


bool hasDistinctDigits(int year) {
    string yearStr = to_string(year);
    set<char> digitSet(yearStr.begin(), yearStr.end());
    return digitSet.size() == yearStr.size();
}

int main() {
    int n;
    cin >> n;
    n++; 

    while (true) {
        if (hasDistinctDigits(n)) {
            cout << n << endl; 
            break;
        }
        n++; 
    }

    return 0;
}
