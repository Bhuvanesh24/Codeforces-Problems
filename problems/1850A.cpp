#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<string> ans(t);
    while (t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b>=10 || b+c >=10 || a+c >=10){
            ans.push_back("YES");
        }
        else {
            ans.push_back("NO");
        }
    }
    for(string s : ans){
        cout << s << endl;
    }
}