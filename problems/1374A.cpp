#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<int>v(t);
    for(int i = 0;i<t;i++){
        int a,b,c;
        cin >> a >> b >> c;
        int k = c - (c%a) + b;
        if (k > c) k-=a;
        v[i] = k;
    }
    
    for(auto& i:v){
        cout << i << endl;
    }
    
    return 0;
}