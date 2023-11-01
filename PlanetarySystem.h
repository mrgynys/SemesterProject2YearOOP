#pragma once

#include <vector>
#include "SpaceObj.h"
#include "Star.h"
#include "Planet.h"

class PlanetarySys {
public:
	PlanetarySys() = delete;
	PlanetarySys(const PlanetarySys&) = delete;
	PlanetarySys(const std::string& name, const std::vector<SpaceObj*>& objects);
	~PlanetarySys();

	void ShowSys();

private:
	std::string name_;
	std::vector<SpaceObj*> objects_;
};