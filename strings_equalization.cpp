#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    while(n--){
        string p1, p2;
        cin >> p1 >> p2;
        if(p1.size() != p2.size()){
            cout << "NO" << endl;
            continue;
        }
        bool tem_igual = false;
        for(size_t i = 0; i < p1.size(); i++){
            if(p2.find(p1[i]) != string::npos){
                tem_igual = true;
                break;
            } 
        }
        if(tem_igual){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}