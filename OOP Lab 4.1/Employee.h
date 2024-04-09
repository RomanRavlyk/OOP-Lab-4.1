#pragma once

class Employee {
	int experience;
public:
	Employee(int exp) : experience(exp) {}
	virtual ~Employee() {};

	int getExp() const { return experience; }
	void setExp(int value) { experience = value; }
	virtual double CalculateSallary() const = 0;
};