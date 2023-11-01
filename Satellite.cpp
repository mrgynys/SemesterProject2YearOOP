#include "Satellite.h"

void Satellite::ShowObj() {
	std::cout << "Satellite " << this->name_ << "\n"
		<< "Diameter: " << this->diameter_ << " km\n"
		<< "Weight: " << this->weight_ << " kg\n"
		<< "\n";
}
