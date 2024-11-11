#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
class ValidAnagram {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;  
        }
        unordered_map<char, int> count;
        for (char c : s) {
            count[c]++;
        }
        for (char c : t) {
            count[c]--;
        }
        for (auto& pair : count) {
            if (pair.second != 0) {
                return false;
            }
        }
        return true;
    }
};
int main() {
    ValidAnagram obj;
    string s = "anagram";
    string t = "nagaram";
    cout << "Is anagram: " << (obj.isAnagram(s, t) ? "true" : "false") << endl;
    return 0;
}
