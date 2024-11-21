#include<iostream>
#include<string>
using namespace std;

int main(){
    string s,x;
    int n,m;
    int t;
    cin>>t;
    while(t--){
        cin >> n >> m;
        cin >> x;
        cin >> s;
        if(x.find(s) != string::npos){
            cout << 0 << endl;
            continue;
        }
        int cnt = 0;
        bool found = false;
        while (cnt<5){
            x+=x;
            cnt++;
            if(x.find(s) != string::npos){
                found = true;
                cout << cnt << endl;
                break;
            }
        }
        if(!found){
            cout << -1 << endl;
        }
    }
}