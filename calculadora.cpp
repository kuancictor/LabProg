#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    long double sum = 1;
    cin >> n;
    while(n--){
        int x; char tipo;
        cin >> x >> tipo;
        if(tipo == '*'){
            sum *= x;
        }
        else if(tipo == '/'){
            sum /= x;
        }
    }
    cout << fixed << setprecision(0) << sum << endl;
}