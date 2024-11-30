#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;  
    string res = ""; 

    for (int i = 0; i < n.length(); i++) {
        int dig = n[i] - '0';  
        int val = 9 - dig;   

    
        if (i == 0 && val == 0) {
            res += n[i]; 
        } else {
            res += to_string(min(dig, val));  
        }
    }
  
    cout << stoi(res) << endl;
    return 0;
}
