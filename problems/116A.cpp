#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    int max_stops = INT_MIN;
    int curr = 0;
    for(int i = 0;i<n;i++){
        int arrive,exit;
        cin >> exit >> arrive;
        curr-=exit;
        curr+=arrive;
        max_stops = max(max_stops,curr);
    }
    cout << max_stops << endl;
}