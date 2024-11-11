#include <iostream>
#include <string>
using namespace std;
class LongPalSubs {
public:
    string longestPalindrome(string s) {
        if (s.length() == 1) {
            return s;  
        }
        string ans = "";
        for (int i = 0; i < s.length(); i++) {
            for (int j = s.length() - 1; j >= i; j--) {
                if (s[i] == s[j]) {
                    int a = i;
                    int b = j;
                    bool isPalindrome = true;
                    while (a <= b) {
                        if (s[a] != s[b]) {
                            isPalindrome = false;
                            break;
                        }
                        a++;
                        b--;
                    }
                    if (isPalindrome) {
                        if (ans.length() < j - i + 1) {
                            ans = s.substr(i, j - i + 1);
                        }
                    }
                }
            }
        }
        return ans;
    }
};
int main() {
    LongPalSubs obj;
    string s = "babad";
    cout << "Longest Palindrome: " << obj.longestPalindrome(s) << endl;
    return 0;
}
