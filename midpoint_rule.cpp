#include "numerical_integration.h";

float midpoint_rule (function<float(float)> func, float lower_bound, float upper_bound, float number_of_subintervals) {

	float step_rate = (upper_bound - lower_bound) / number_of_subintervals;
	float i = lower_bound;
	float interval_counter = 0;

	float temp_result = 0;
	float result = 0;

	while (interval_counter <= number_of_subintervals) {

		temp_result = func(((i - step_rate) + i) / 2);

		i += step_rate;
		result += temp_result;
		interval_counter++;
	}

	return step_rate * result;
}