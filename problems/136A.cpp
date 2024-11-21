#include <iostream>
#include <vector>
using namespace std;

vector<int> find_givers(int n, const vector<int>& p) {
    vector<int> gifted_by(n + 1, 0);  

   
    for (int giver = 1; giver <= n; ++giver) {
        int receiver = p[giver - 1];  
        gifted_by[receiver] = giver;
    }

    return gifted_by;
}

int main() {
    int n;
    cin >> n;  
    vector<int> p(n);

    for (int i = 0; i < n; ++i) {
        cin >> p[i];  
    }

    vector<int> result = find_givers(n, p);
    for (int i = 1; i <= n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
