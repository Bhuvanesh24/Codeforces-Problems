#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

int main(){
    int t;
    cin >> t;
    vector<int> res;
    while(t--){
        vector<int> check(3);
        for(int i=0;i<3;i++){
            cin>>check[i];
        }
        sort(check.begin(),check.end());
        res.push_back(check[1]);
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }
}