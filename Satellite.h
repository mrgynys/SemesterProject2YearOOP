#pragma once

#include "SpaceObj.h"

class Satellite : public SpaceObj {
public:
	Satellite(const std::string& name, const double& diameter, const double& weight) : SpaceObj(name, diameter, weight) {}
	~Satellite() {}

	void ShowObj();
};