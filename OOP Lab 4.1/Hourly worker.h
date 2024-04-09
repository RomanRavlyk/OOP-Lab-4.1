#pragma once
#include "Employee.h"

class Hourly_employed : public Employee {
public:
	Hourly_employed(int exp) : Employee(exp) {}

	virtual double CalculateSallary() const override;
};