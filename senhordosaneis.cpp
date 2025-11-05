#include <iostream>
using namespace std;

int main(){
    int h, e, a, o, w, x;
    cin >> h >> e >> a >> o >> w;

    int totalgood = (h + e + a);
    int totalbad = (o + w);

    if(totalgood > totalbad){
        cout << "Middle-earth is safe." << "\n";
        return 0;
    }
    else{
        cin >> x;
        totalgood += x;
        if(totalgood >= totalbad){
            cout << "Middle-earth is safe." << "\n";
            return 0;
        }
        else{
            cout << "Sauron has returned." << "\n";
            return 0;
        }
    }
}

