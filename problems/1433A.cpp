#include<iostream>
#include<vector>
using namespace std;
int findDigit(int n){
    int count = 0;
    while(n != 0){
        n = n / 10;
        count++;
        }
        return count;
}
int main()
{
    int n;
    cin >> n;
    vector<int>ans;
    for(int i=0;i<n;i++){
        int press = 0;
        int x;
        cin >> x;
        int cnt = findDigit(x);
        int digit = x%10;
        int digits = (digit-1)*10;
        press+=digits;
        press += (cnt*(cnt+1))/2;
        ans.push_back(press);
    }   
    for(int num:ans){
        cout << num << endl;
    }
}