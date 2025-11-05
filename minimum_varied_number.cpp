#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string res = "";
        for(int i = 9; i >= 1; i--){
            if(n >= i){
                res += to_string(i);
                n -= i;
            }
            if(n == 0){
                break;
            }
        }
        sort(res.begin(), res.end());
        cout << res << endl;
    }
    
    return 0;
}