#pragma once
#include "Employee.h"

class Sal_emp: public Employee {
public:
	virtual double CalculateSallary() const override;

	Sal_emp(int x) : Employee(x) {};
};