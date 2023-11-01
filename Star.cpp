#include "Star.h"

Star::~Star() {}

double Star::GetSurfaceTemperature() { return this->surface_temperature_; }

void Star::ShowObj() {
	std::cout << "Satellite " << this->name_ << "\n"
		<< "Diameter: " << this->diameter_ << " km\n"
		<< "Weight: " << this->weight_ << " kg\n"
		<< "Surface temperature: " << this->surface_temperature_ << " degrees Celsius\n"
		<< "\n";
}
