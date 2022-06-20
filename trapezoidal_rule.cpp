#include "numerical_integration.h"

//#define f(x) 1/(1+pow(x,2))

float trapezoidal_rule(function<float(float)> func, float lower_bound, float upper_bound, int number_of_subintervals) {

    float delta_x = (upper_bound - lower_bound) / (number_of_subintervals);
    float i = lower_bound;
    float temp_result = 0;
    float result = 0;

    for (i; i <= upper_bound; i += delta_x) {

        if (i == lower_bound || (ceilf(i * 100) / 100) == upper_bound) {
            temp_result = func(i);
        }
        else {
            temp_result = 2 * func(i);
        }
        result += temp_result;
    }

    return (delta_x / 2) * result;
}