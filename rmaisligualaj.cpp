#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    while(cin >> n){
        int mais = n.find('+');
        int igual = n.find('=');

        string a1 = n.substr(0, mais);
        string a2 = n.substr(mais+1, igual-mais-1);
        string r  = n.substr(igual+1);

        if(!isdigit(a1[0])){        
            cout << stoll(r) - stoll(a2) << endl;
        }
        else if(!isdigit(a2[0])){
            cout << stoll(r) - stoll(a1) << endl;
        } 
        else{
            cout << stoll(a1) + stoll(a2) << endl;
        }
    }
    return 0;
}
