#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;


string toLowerCase(const string& str) {
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

int compareStrings(const string& s1, const string& s2) {
    
    string lowerS1 = toLowerCase(s1);
    string lowerS2 = toLowerCase(s2);

    if (lowerS1 < lowerS2) {
        return -1;
    } else if (lowerS1 > lowerS2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    string s1, s2;

    cin >> s1;
    cin >> s2;

    
    int result = compareStrings(s1, s2);
    cout << result << endl;

    return 0;
}
