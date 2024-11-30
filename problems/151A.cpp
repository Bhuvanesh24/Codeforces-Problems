#include <iostream>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int avail_ml = k*l;
    int avail_slices = c*d;
    if(avail_ml<nl || avail_slices<=0 ||p<=0){
        cout << 0;
        return 0;
    }
    int bottles_ml = avail_ml/nl;
    int bottles_salt = p/np;
    int min_toasts_to_make = min(bottles_ml,min(avail_slices,bottles_salt));
    cout << min_toasts_to_make/n;
}