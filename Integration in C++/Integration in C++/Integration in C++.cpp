#include <iostream>
#include <cmath>

// Function to integrate
double function_to_integrate(double x) {
    return x * x; // Change this to your desired function
}

// Trapezoidal rule integration
double trapezoidal_integration(double a, double b, int n) {
    double h = (b - a) / n;
    double integral = 0.5 * (function_to_integrate(a) + function_to_integrate(b));

    for (int i = 1; i < n; ++i) {
        double x = a + i * h;
        integral += function_to_integrate(x);
    }

    return integral * h;
}

int main() {
    double a = 0.0;  // Lower limit of integration
    double b = 1.0;  // Upper limit of integration
    int n = 1000;    // Number of intervals

    double result = trapezoidal_integration(a, b, n);

    std::cout << "Approximate integral: " << result << std::endl;

    return 0;
}
