#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;
const int N = 1e5+10;
int T,n;
int main(){
    scanf("%d", &T);
    while (T--){
        scanf("%d", &n);
        int ans=n;
        for (int i=n-1;i>=1;i--){
            ans=round((ans*1.0+i)/2);
        }
        printf ("%d\n",ans);
        ans=n;
        for (int i=n-1;i>=1;i--){
            printf ("%d %d\n",ans,i);
            ans=round((ans*1.0+i)/2);
        }
    }
    return 0;
}