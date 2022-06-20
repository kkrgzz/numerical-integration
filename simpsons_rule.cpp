#include "numerical_integration.h"

float simpsons_rule(function<float(float)> func, float lower_bound, float upper_bound, float number_of_subintervals) {
	
	float step_rate = (upper_bound - lower_bound) / number_of_subintervals;
	float i = lower_bound;
	bool duality_state = true;

	float temp_result = 0;
	float result = 0;

	for (i; i <= upper_bound; i += step_rate) {
		if (i == lower_bound || (ceilf(i * 100) / 100) == upper_bound) {
			temp_result = func(i);
		}
		else {
			duality_state = !duality_state;

			if (duality_state) {
				// If number is even
				temp_result = 2 * func(i);
			}
			else {
				// If number is odd
				temp_result = 4 * func(i);
			}
		}

		result += temp_result;
	}

	return (step_rate / 3) * result;

}