#include "Salaried Employee.h"
#include <iostream>

double Sal_emp::CalculateSallary() const{
	return 3000.0 + (getExp() * 100);
}
