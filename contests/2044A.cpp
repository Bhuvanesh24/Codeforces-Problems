#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int>ans;
    while(t--){
        int n;
        cin >> n;
        ans.push_back(n-1);
    }
    for(int num:ans){
        cout << num << endl;
    }
}