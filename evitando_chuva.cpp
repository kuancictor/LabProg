#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, comprou_casa = 0, comprou_trab = 0, casa = 0, trab = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        string sd, sn;
        cin >> sd >> sn;
        if(sd == "chuva"){
            if(casa > 0){
                casa--;
                trab++;
            }
            else{
                comprou_casa++;
                trab++;
            }
        }

        if(sn == "chuva"){
            if(trab > 0){
                trab--;
                casa++;
            }
            else{
                comprou_trab++;
                casa++;
            }
        }
        
    }
    cout << comprou_casa << " " << comprou_trab << endl;
    return 0;
}