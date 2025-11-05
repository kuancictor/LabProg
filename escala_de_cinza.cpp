#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        string op;
        cin >> op;
        int r, g, b;
        cin >> r >> g >> b;
        int sum = r+g+b;
        
        if(op == "min"){
            cout << "Caso #" << i << ": " << min({r, g, b}) << endl;
        }
        else if(op == "max"){
            cout << "Caso #" << i << ": " << max({r, g, b}) << endl;
        }
        else if(op == "mean"){
            cout << "Caso #" << i << ": " << sum/3 << endl;
        }
        else if(op == "eye"){
            int P = 0.30*r + 0.59*g + 0.11*b;
            cout << "Caso #" << i << ": " << P << endl;
        }
    }
    return 0; 
}