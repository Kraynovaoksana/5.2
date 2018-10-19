#include <iostream>
#include <cmath>

double f(double m, double t, double p) {
    double const Na = pow(6.022 * 10, 23);
    return m / (sqrt(2) * 3, 14 * pow(t, 2) * p * Na);
}
    int main() {
    std::cout << f(0.1, 0.1, 0.1) << '\n';
    return 0;
}