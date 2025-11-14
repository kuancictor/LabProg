#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin >> s){
        string aux;
        list<string> v;
        bool home = false;
        for(char i : s){
            if(i == '['){
                if(home){
                    v.push_front(aux); 
                }
                else{
                    v.push_back(aux); 
                }
                home = true;
                aux = "";
                continue;
            }
            else if(i == ']'){
                if(home){
                    v.push_front(aux); 
                }
                else{
                    v.push_back(aux); 
                }
                aux = "";
                home = false;
                continue;
            }
            aux += i;
        }
        if(home){
            v.push_front(aux); 
        }
        else{
            v.push_back(aux); 
        }
        for(auto &it : v){
            cout << it;
        }
        cout << endl;
    }
    
    return 0;
}