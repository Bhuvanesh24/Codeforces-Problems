#include<iostream>
#include<string>
#include<cctype>
#include<unordered_set>
using namespace std;

int main(){
    string str,res;
    cin >> str;

    int n = str.size();
    unordered_set<char> vowels = {'a','e','i','o','u','y'};
    for(char ch : str){
        if(vowels.find(tolower(ch))!=vowels.end()){
            continue;
        }
        res+='.';
        res+=tolower(ch);

    }
    cout << res <<endl;
}