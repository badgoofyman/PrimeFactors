#include "prime-factors.h"

std::vector<int> PrimeFactors::of(int number) const {
	std::vector<int> result;
	for (int divisor = 2; number > 1; divisor++) {
		while (number % divisor == 0) {
			result.push_back(divisor);
			number /= divisor;
		}
	}
	return result;
}
