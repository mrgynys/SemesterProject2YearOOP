#include "PlanetarySystem.h"

PlanetarySys::PlanetarySys(const std::string& name, const std::vector<SpaceObj*>& objects) {
	this->name_ = name;
	for (int i = 0; i < objects.size(); i++) this->objects_.push_back(objects[i]);
}

PlanetarySys::~PlanetarySys() { this->objects_.clear(); }

void PlanetarySys::ShowSys() {
	std::cout << this->name_ << " information {\n\n";
	for (SpaceObj* i : this->objects_) i->ShowObj();
	std::cout << "}\n\n";
}