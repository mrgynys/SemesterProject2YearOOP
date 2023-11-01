#pragma once
#include <string>
#include <iostream>

class SpaceObj {
public:
	SpaceObj() = delete;
	SpaceObj(const std::string& name, const double& diameter, const double& weight);
	SpaceObj(const SpaceObj& so);
	SpaceObj operator=(SpaceObj& rightso);
	~SpaceObj();

	std::string GetName();
	double GetDiameter();
	double GetWeight();

	virtual void ShowObj();

protected:
	std::string name_;
	double diameter_;
	double weight_;
};