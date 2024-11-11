#include <iostream> 
#include <vector> 
using namespace std; 
class BigInt { 
public: 
    vector<int> num; 
    BigInt() { 
        num.push_back(1);   
    } 
    void multiply(int x) { 
        int carry = 0; 
        for (int i = 0; i < num.size(); i++) { 
            int prod = num[i] * x + carry; 
            num[i] = prod % 10;  
            carry = prod / 10;   
        } 
        while (carry) { 
            num.push_back(carry % 10); 
            carry /= 10; 
        } 
    } 
    void print() { 
        for (int i = num.size() - 1; i >= 0; i--) { 
            cout << num[i]; 
        } 
        cout << endl; 
    } 
}; 
BigInt factorial(int n) { 
    BigInt result; 
    for (int i = 2; i <= n; i++) { 
        result.multiply(i); 
    } 
    return result; 
} 
int main() { 
    int num; 
    cin >> num;   
    BigInt result = factorial(num); 
    result.print();   
    return 0; 
} 