#include "PlanetarySystem.h"

int main(int argc, char argv[]) {
	Star Sun("Sun", 1390000, 1.9891 * pow(10, 30), 5700);
	Planet Mercury("Mercury", 4879, 3.33 * pow(10, 23), 58, 88, 176, {});

	std::vector<SpaceObj*> system = { &Sun, &Mercury };

	PlanetarySys SolarSys("Solar System", {&Sun, &Mercury});

	SolarSys.ShowSys();

	return 0;
}