#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    double r, l;
    const double pi = 3.1415;
    cin >> r >> l;
    double v = (4.0/3.0) * pi * pow(r, 3);
    long long qtd = (long long)(l/v);
    cout << qtd << endl;
    
    return 0;
}