#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<string> res;
    while(t--){
        int n, s, m;
        vector<vector<int>> intervals;
        cin >> n >> s >> m;

        for (int i = 0; i < n; i++){
            vector<int> ints(2);
            cin >> ints[0] >> ints[1];
            intervals.push_back(ints);
        }

        int pt = 0; 
        bool flag = false;

        for(int i = 0; i < n; i++){
            int start = intervals[i][0];
            int end = intervals[i][1];

            int free_time = start - pt;
            if(free_time >= s){
                flag = true;
                break;
            }

            pt = end;
        }
       
        if (!flag && (m - pt >= s)) {
            flag = true;
        }

        if(flag){
            res.push_back("YES");
        } else {
            res.push_back("NO");
        }
    }

    for(string s : res){
        cout << s << endl;
    }
}
