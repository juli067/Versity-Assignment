#include <iostream>
#include <cmath>
#define wavelenght_ofgreen_light wl1
#define wavelengh_ofred_light wl2

using namespace std;

int main() {

    double wl1 = 530e-9;
    int m1 = 3;
    double theta1 = 65.0 * M_PI / 180;

    double d = m1 * wl1 / sin(theta1);


    double wl2 = 700e-9;
    int m2 = 2;
    double theta2 = asin(m2 * wl2 / d);


    theta2 = theta2 * 180 / M_PI;

    cout << "Angle for the second-order bright spot of red light: " << theta2 << " degrees" << endl;

    return 0;
}
