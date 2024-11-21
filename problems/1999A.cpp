#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> res;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        while( n>0){
            sum += n%10;
            n/=10;
        }
        res.push_back(sum);
    }
    for(int num:res){
        cout << num << endl;
    }

}