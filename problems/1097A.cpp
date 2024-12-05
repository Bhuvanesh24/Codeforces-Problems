#include <iostream>
#include <string>

using namespace std;

int main(){
    string table_card;
    int got = -1;
    cin >> table_card;
    char rank = table_card[0];
    char suit = table_card[1];
    for(int i=0;i<5;i++){
        string card;
        cin >> card;
        if(card[0]==rank || card[1]==suit){
            got = 1;
            break;
        }
    }
    if(got==1) cout << "YES";
    else cout << "NO";
}