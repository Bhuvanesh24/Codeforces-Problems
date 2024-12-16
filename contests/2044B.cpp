#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<string> ans;
    while(t--){
        string s;
        string res;
        cin >> s;
        for(char ch: s){
            if(ch=='w') res+='w';
            else if(ch=='p') res+='q';
            else res+='p';
        }
        reverse(res.begin(),res.end());
        ans.push_back(res);
    }    
    for(string st:ans){
        cout << st << endl;
    }

}