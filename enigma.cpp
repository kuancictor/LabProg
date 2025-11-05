#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string msg, crib;
    ll posV = 0;
    cin >> msg >> crib;
    for(int i = 0; i <= (msg.size() - crib.size()); i++){
        int j;
        for(j = 0; j < crib.size(); j++){
            if(crib[j] == msg[i + j]){
                break;
            }
        }
        if(j == crib.size()){
            posV++;
        }
    }
    cout << posV << endl;
    return 0;
}