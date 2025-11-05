#include <iostream>
using namespace std;

int main(){
    int e, f, c, cheia, vazia, bebeu;
    cin >> e >> f >> c;
    vazia = e + f;
    while(vazia >= c){
        cheia = vazia/c;
        bebeu += cheia;
        vazia = (vazia % c) + cheia;
        cheia = 0;
    }
    cout << bebeu << "\n";
}