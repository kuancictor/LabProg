#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;  
    cin >> n;
    while(n > 0){
        int b = 0;
        string entrada;
        cin >> entrada;
        for(auto aux : entrada){
            if(aux == 'E'){
                b = (b + 1) % 4;
            }
            else if(aux == 'D'){
                b = (b + 3) % 4;
            }
        }
        if(b == 0){
            cout << "N";
        }
        else if(b == 1){
            cout << "O";
        }
        else if(b == 2){
            cout << "S";
        }
        else if(b == 3){
            cout << "L";
        }
        cout << endl;
        cin >> n;
    }
    
    return 0;
}