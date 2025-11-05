#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long x, y;
        cin >> x >> y;
        long long carac, digi, total;
        carac = pow(26, x);
        digi = pow(10, y);
        total = carac * digi;
        if(x == 0 && y == 0){
            cout << "0" << endl;
        }
        else{
            cout << total << endl;
        }
    }
    
    return 0;
}

