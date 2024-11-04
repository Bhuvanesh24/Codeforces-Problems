#include <iostream> 
#include <string>


using namespace std;

int main(){
    int val = 0;
    int lines;
    cin >> lines;
    for (int i = 0; i < lines; i++){
        string s;
        cin >> s;
        if(s=="++X" || s=="X++"){
            val++;
        }
        else val--;
        }
        cout << val;
}