#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int joao, maria;
        joao = maria = 0;
        for(int i = 0; i < 3; i++){
            int x, y;
            cin >> x >> y;
            joao += x*y;
        }
        for(int i = 0; i < 3; i++){
            int x, y;
            cin >> x >> y;
            maria += x*y;
        }
        if(maria > joao){
            cout << "MARIA" << endl;
        }
        else{
            cout << "JOAO" << endl;
        }
    }
    return 0;
}