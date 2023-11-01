#pragma once

#include <vector>
#include "SpaceObj.h"
#include "Satellite.h"

class Planet : public SpaceObj {
public:
	Planet(const std::string& name,
		const double& diameter,
		const double& weight,
		const double& distance_from_star,
		const double& year_duration,
		const double& day_duration,
		const std::vector<Satellite>& satellites)
		: SpaceObj(name, diameter, weight) {
		this->distance_from_star_ = distance_from_star;
		this->year_duration_ = year_duration;
		this->day_duration_ = day_duration;
		for (Satellite i : satellites) this->satellites_.push_back(i);
	}
	Planet(const Planet& planet) : SpaceObj(planet) {
		this->distance_from_star_ = planet.distance_from_star_;
		this->year_duration_ = planet.year_duration_;
		this->day_duration_ = planet.day_duration_;
		for (Satellite i : planet.satellites_) this->satellites_.push_back(i);
	}
	~Planet();

	double GetDistanceFromStar();
	double GetYearDuration();
	double GetDayDuration();
	std::vector<Satellite> GetSatellites();

	void ShowObj();

private:
	double distance_from_star_;
	double year_duration_;
	double day_duration_;
	std::vector<Satellite> satellites_;
};

