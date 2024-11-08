#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int res = 0;
    if(n%2==0) res =  n/2;
    else res = -((n+1)/2);
    cout << res;
}