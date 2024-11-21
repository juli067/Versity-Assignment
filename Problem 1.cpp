#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int m, d;
    double theta, lambda;

    cout << "Enter the values of m, d (in micrometers), and theta (in degrees): ";
    cin >> m >> d >> theta;

    // Convert d to nanometers
    d *= 1000;

    // Calculate wavelength in nanometers
    lambda = (m * d * sin(theta * M_PI / 180)) / 1000;

    // Determine the color based on wavelength range
    string color;
    if (lambda >= 380 && lambda < 450) {
        color = "violet";
    } else if (lambda >= 450 && lambda < 485) {
        color = "blue";
    } else if (lambda >= 485 && lambda < 500) {
        color = "cyan";
    } else if (lambda >= 500 && lambda < 565) {
        color = "green";
    } else if (lambda >= 565 && lambda < 590) {
        color = "yellow";
    } else if (lambda >= 590 && lambda < 625) {
        color = "orange";
    } else if (lambda >= 625 && lambda <= 750) {
        color = "red";
    } else {
        color = "out of visible light range";
    }

    cout << "Wavelength: " << lambda << " nm" << endl;
    cout << "Color: " << color << endl;

    return 0;
}
