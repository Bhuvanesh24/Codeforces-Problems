#include <iostream> 
#include <string>
#include <unordered_set>

using namespace std;

int main(){
    string s;
    cin >> s;
    unordered_set<char> ss;
    for(char ch : s){
        ss.insert(ch);
    }
    if(ss.size()%2!=0) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
}