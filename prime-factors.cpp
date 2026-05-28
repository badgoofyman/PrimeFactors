#include "prime-factors.h"

std::vector<int> PrimeFactors::of(int number) const {
	std::vector<int> result;
	if (number % 2 == 0) {
		result.push_back(2);
	}
	return result;
}
