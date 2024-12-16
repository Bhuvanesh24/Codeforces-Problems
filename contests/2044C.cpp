#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int>res;
    while(t--){
        int m,a,b,c;
        cin >> m >> a >> b >> c;
        int first_row = m;
        int second_row = m;
        int monkeys_seated = 0;

        if(a<=first_row){
            monkeys_seated += a;
            first_row -= a;
        }
        else{
            monkeys_seated += first_row;
            first_row = 0;
        }
        if(b<=second_row){
            monkeys_seated += b;
            second_row -= b;
        }
        else{
            monkeys_seated += second_row;
            second_row = 0;
        }
        int rem_seats = first_row+second_row;
        
        if(c<=rem_seats){
            monkeys_seated += c;
        }
        else{
            monkeys_seated+= rem_seats;
        }
        res.push_back(monkeys_seated);

    }
    for(int num:res){
        cout << num << endl;
    }

}