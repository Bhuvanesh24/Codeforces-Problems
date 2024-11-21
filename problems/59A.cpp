#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;  

    int upperCount = 0, lowerCount = 0;

    
    for (char c : word) {
        if (c >= 'A' && c <= 'Z') {
            upperCount++;
        } else if (c >= 'a' && c <= 'z') {
            lowerCount++;
        }
    }


    if (upperCount > lowerCount) {
       
        for (char &c : word) {
            if (c >= 'a' && c <= 'z') {
                c -= 32;  
            }
        }
    } else {
        
        for (char &c : word) {
            if (c >= 'A' && c <= 'Z') {
                c += 32; 
            }
        }
    }

    cout << word << endl;

    return 0;
}
