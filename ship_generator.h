#pragma once

#include <vector>
#include "defs.h"
#include <random>

class ShipGenerator {

public:
	ShipGenerator();

	template< class Generator >
	void operator()(std::vector<Ship>& target, Generator& gen);
private:
	std::vector<int> values;
};
