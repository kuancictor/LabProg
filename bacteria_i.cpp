#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string d, s;
    while(cin >> d >> s){
        if(d.find(s) != string::npos){
            cout << "Resistente" << endl;
        }
        else{
            cout << "Nao resistente" << endl;
        }
    }
    return 0;
}