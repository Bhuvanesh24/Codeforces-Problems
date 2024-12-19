#include <iostream>
#include <vector>

using namespace std;

int countDays(vector<int> ready, int pages) {
    int page = 0;
    for (int day = 0;; day = (day + 1) % 7) { 
        page += ready[day]; 
        if (page >= pages) {
            return day + 1;
        }
    }
}

int main() {
    int pages;
    cin >> pages;

    vector<int> ready(7);
    for (int i = 0; i < 7; i++) {
        cin >> ready[i];
    }

    cout << countDays(ready, pages) << endl;
    return 0;
}
