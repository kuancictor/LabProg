#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    do{        
        string num;
        cin >> x >> y;
        if(x != 0 && y != 0){
            int soma = x+y;
            num = to_string(soma);
            for(int i = 0; i < num.size(); i++){
                if(num[i] != '0'){
                    cout << num[i];
                }   
            }
            cout << endl;
        }
    }while(x != 0 && y != 0);
    return 0;
}