#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    cin >> s;
    
    for(size_t i = 0; i < s.size(); i++){
       s[i] = tolower(s[i]);
    }
    
    if(s.find("zelda") != string::npos){
        cout << "Link Bolado" << endl;
    }
    else{
        cout << "Link Tranquilo" << endl;
    }

    return 0;
}