#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, m;
    while(cin >> h >> m){
        int hora = h / 30;
        int minuto = m / 6;
        cout << setfill('0') << setw(2) << hora << ":" << setfill('0') << setw(2) << minuto << endl;
    }
    return 0;
}
