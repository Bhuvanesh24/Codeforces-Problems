#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include<algorithm>
using namespace std;
int main() {
    string input;
    cin >> input;
    vector<int> nums;

    stringstream ss(input);
    string temp;

    string res;
    while (getline(ss, temp, '+')) {
        nums.push_back(stoi(temp)); 
    }

    sort(nums.begin(),nums.end());

    for(int num:nums){
        res += to_string(num) + "+";
    }
    res.pop_back();

    cout << res << endl;
    return 0;
}
