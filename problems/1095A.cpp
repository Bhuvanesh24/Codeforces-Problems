#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s,res;
    cin >> s;
    int i = 0;
    int step = 1;
    
    while (i < n) {
        res += s[i];
        i += step;
        step++;
    }
    cout << res << endl;
}