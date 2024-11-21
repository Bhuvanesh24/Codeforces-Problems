#include <iostream> 
#include <unordered_set>
using namespace std;
int main(){
    unordered_set<int> hashset;
    for(int i=0;i<4;i++){
        int k;
        cin >> k;
        hashset.insert(k);
    }
    cout << 4-hashset.size();
}