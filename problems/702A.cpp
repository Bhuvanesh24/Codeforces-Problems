#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int maxLen = 1;
    int currLen = 1;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            currLen++;
            maxLen = max(maxLen,currLen);
        }
        else currLen = 1;
    }
    cout << maxLen << endl;
}