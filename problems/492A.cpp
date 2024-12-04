#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;
    
    int height = 0; 
    int required_cubes = 0; 

    for (int i = 1; ; i++) {
        required_cubes += i; 
        if (n >= required_cubes) {
            height++; 
            n -= required_cubes; 
        } else {
            break; 
        }
    }

    cout << height << endl; 
    return 0;
}
