#include <iostream> 
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int f= 1;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(k==1){
            f = 0;
            cout<<"HARD";
            break;
        }
    }
    if(f) cout<<"EASY";
    return 0;
}