#include "numerical_integration.h"

// Example functions

float func(float x) {
    return pow(x, 2);
}

float power_series(float x) {
    return 6 * pow((x / 10), 0.521);
}

int main()
{
    float trapezoidal_result = trapezoidal_rule(&func, 0, 8, 100);
    cout << trapezoidal_result << endl;

    float simpsons_result = simpsons_rule(&func, 0, 8, 100);
    cout << simpsons_result << endl;

    float midpoint_result = midpoint_rule(&power_series, 0, 10, 100);
    cout << midpoint_result;
}
