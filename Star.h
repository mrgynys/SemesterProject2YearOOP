#pragma once

#include "SpaceObj.h"

class Star : public SpaceObj {
public:
	Star() = delete;
	Star(const std::string& name,
		const double& diameter,
		const double& weight,
		const double& surface_temperature)
		: SpaceObj(name, diameter, weight) {
		this->surface_temperature_ = surface_temperature;
	}
	Star(const Star& star) : SpaceObj(star) {
		this->surface_temperature_ = star.surface_temperature_;
	}
	~Star();

	double GetSurfaceTemperature();

	void ShowObj();

private:
	double surface_temperature_;
};

