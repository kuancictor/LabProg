#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    //cin >> n;
    while(cin >> n){
        double maior = -1.0;
        for(int i = 1; i <= n; i++){
            int min, dist;
            cin >> min >> dist;
            double velomed = (double)dist/min;
            if(velomed > maior){
                cout << i << endl;
                maior = velomed;
            }
        }
    }
    return 0; 
}