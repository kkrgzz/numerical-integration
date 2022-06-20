#include <iostream>
#include <cmath>
#include <iomanip>
#include <functional>

using namespace std;

float trapezoidal_rule(function<float(float)> func, 
	float lower_bound, float upper_bound, int number_of_subintervals);

float simpsons_rule(function<float(float)> func, 
	float lower_bound, float upper_bound, float number_of_subintervals);

float midpoint_rule(function<float(float)> func,
	float lower_bound, float upper_bound, float number_of_subintervals);