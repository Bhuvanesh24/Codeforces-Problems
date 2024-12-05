#include <iostream>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    while(cases--){
        int a,b,n;
        cin >> a >> b >> n;
        int steps = 0;
        while(a<=n && b<=n){
            if(a>b){
                b+=a;
            }
            else{
                a+=b;
            }
            steps++;
        }
        cout << steps << endl; 
    }
}