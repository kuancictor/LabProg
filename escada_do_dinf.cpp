#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        double h, c, l;
        cin >> h >> c >> l;
        double hip = h*h + c*c;
        double q = sqrt(hip);
        q /= 10000;
        printf("%.4lf\n", q*n*l);
    }

    return 0;
}