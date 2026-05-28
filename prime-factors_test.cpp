#include "gmock/gmock.h"
#include "prime-factors.h"

using namespace testing;

class PrimeFactorsFixture : public Test {
public:
	PrimeFactors prime_factor;
};

TEST_F(PrimeFactorsFixture, Of1_ReturnsEmpty) {
	EXPECT_THAT(prime_factor.of(1), IsEmpty());
}
