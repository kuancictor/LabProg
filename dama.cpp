#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    vector<int> in(2), out(2);
    cin >> in[0] >> in[1] >> out[0] >> out[1];
    while(1){
        if(in[0] == 0 && in[1] == 0 && out[0] == 0 && out[1] == 0){
            break;
        }

        int x, y, saida;
        x = abs(in[0] - out[0]);
        y = abs(in[1] - out[1]);
        if(x == 0 && y == 0){
            saida = 0;
        }
        else if(x == y || x == 0 || y == 0){
            saida = 1;
        }
        else{
            saida = 2;
        }
        cout << saida << endl;
        cin >> in[0] >> in[1] >> out[0] >> out[1];
    }

    return 0;
}