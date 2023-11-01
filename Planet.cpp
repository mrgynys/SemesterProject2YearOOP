#include "Planet.h"

Planet::~Planet() { this->satellites_.clear(); }

double Planet::GetDistanceFromStar() { return this->distance_from_star_; }
double Planet::GetYearDuration() { return this->year_duration_; }
double Planet::GetDayDuration() { return this->day_duration_; }
std::vector<Satellite> Planet::GetSatellites() { return this->satellites_; }

void Planet::ShowObj() {
	std::cout << "Planet " << this->name_ << "\n"
		<< "Diameter: " << this->diameter_ << " km\n"
		<< "Weight: " << this->weight_ << " kg\n"
		<< "Distance from star: " << this->distance_from_star_ << " million km\n"
		<< "Year duration: " << this->year_duration_ << " earth day\n"
		<< "Day duration: " << this->day_duration_ << " earth day\n"
		<< "Satellites:";
	if (satellites_.size() > 0) {
		std::cout << "\n";
		for (Satellite i : this->satellites_) i.ShowObj();
	}
	else
	{
		std::cout << " nothing\n";
	}
	std::cout << "\n";
}