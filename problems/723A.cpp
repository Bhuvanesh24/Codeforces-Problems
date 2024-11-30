#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>coords(3);
    for(int i=0;i<3;i++){
        cin>> coords[i];
    }   
    sort(coords.begin(),coords.end());
    int dist_need_to_travel = (coords[1]-coords[0]) + (coords[2]-coords[1]);
    cout << dist_need_to_travel;

}