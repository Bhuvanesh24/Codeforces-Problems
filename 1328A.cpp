#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >>t;
    vector<int>res;
    while(t--){
        int a,b;
        cin >>a>>b;
        int rem = a%b;
        if(rem==0){
            res.push_back(0);
        }
        else res.push_back(b-rem);
    }
    for(int num : res){
        cout << num << endl;
    }
}