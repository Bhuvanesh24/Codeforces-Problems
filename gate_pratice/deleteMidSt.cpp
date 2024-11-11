#include <iostream>
#include <stack>
using namespace std;
class DeleteMiddleElement {
public:
    static void deleteMiddle(stack<int>& s, int current, int size) {
        if (s.empty() || current == size / 2) {
            s.pop();
            return;
        }
        int temp = s.top();
        s.pop();
        deleteMiddle(s, current + 1, size);
        s.push(temp);
    }

    static void printStack(stack<int> s) {
        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
};
int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int size = s.size();
    DeleteMiddleElement::deleteMiddle(s, 0, size);
    cout << "Stack after deleting middle element: ";
    DeleteMiddleElement::printStack(s);
    return 0;
}
