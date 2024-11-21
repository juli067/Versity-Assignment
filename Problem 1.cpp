#include <iostream>
#include <cmath>
#define wavelength wl
using namespace std;

int main() {
    int m;
    double theta,wl,d ;


    cin >> m >> d >> theta;


    d *= 1000;

     wl= (  d * sin(theta * (M_PI / 180)) / m);

    string color;
    if (wl >= 380 && wl < 450) {
        color = "violet";
    } else if (wl >= 450 && wl < 485) {
        color = "blue";
    } else if (wl >= 485 && wl < 500) {
        color = "cyan";
    } else if (wl >= 500 && wl < 565) {
        color = "green";
    } else if (wl >= 565 && wl < 590) {
        color = "yellow";
    } else if (wl >= 590 && wl < 625) {
        color = "orange";
    } else if (wl >= 625 && wl <= 750) {
        color = "red";
    } else {
        color = "out of visible light range";
    }

    cout <<wl<< " nm" << endl;
    cout << color << endl;

    return 0;
}
