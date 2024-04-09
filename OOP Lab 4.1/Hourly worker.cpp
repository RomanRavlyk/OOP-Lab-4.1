#include <iostream>
#include "Hourly worker.h"

double Hourly_employed::CalculateSallary() const {
	return 10.0 * 8 * getExp();
}