#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string> ans(t);
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a<b && b<c && a<c){
            ans.push_back("STAIR");
        } 
        else if(a<b && b>c){
            ans.push_back("PEAK");
        }
        else{
            ans.push_back("NONE");
        }
    }
    for(string s: ans){
        cout<<s<<endl;
    }
    
}