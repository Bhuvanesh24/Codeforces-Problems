#include <iostream>
#include <stack>
#include <string>
using namespace std;
class ValidPara {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) {
                    return false;
                }
                if (c == ')' && st.top() != '(') {
                    return false;
                } else if (c == '}' && st.top() != '{') {
                    return false;
                } else if (c == ']' && st.top() != '[') {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};
int main() {
    ValidPara obj;
    string s = "{[]}";
    cout << "Is valid: " << (obj.isValid(s) ? "true" : "false") << endl;
    return 0;
}
