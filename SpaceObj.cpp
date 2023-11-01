#include "SpaceObj.h"

SpaceObj::SpaceObj(const std::string& name, const double& diameter, const double& weight) {
	this->name_ = name;
	this->diameter_ = diameter;
	this->weight_ = weight;
}

SpaceObj::SpaceObj(const SpaceObj& so) {
	this->name_ = so.name_;
	this->diameter_ = so.diameter_;
	this->weight_ = so.weight_;
}

SpaceObj SpaceObj::operator=(SpaceObj& rightso) {
	this->name_ = rightso.name_;
	this->diameter_ = rightso.diameter_;
	this->weight_ = rightso.weight_;
	return *this;
}

SpaceObj::~SpaceObj() {}

std::string SpaceObj::GetName() { return this->name_; }
double SpaceObj::GetDiameter() { return this->diameter_; }
double SpaceObj::GetWeight() { return this->weight_; }

void SpaceObj::ShowObj() {
	std::cout << "Space object " << this->name_ << "\n"
		<< "Diameter: " << this->diameter_ << " km\n"
		<< "Weight: " << this->weight_ << " kg\n"
		<< "\n";
}