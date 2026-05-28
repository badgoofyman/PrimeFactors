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

TEST_F(PrimeFactorsFixture, Of2_ReturnsSelf) {
	EXPECT_THAT(prime_factor.of(2), ElementsAre(2));
}

TEST_F(PrimeFactorsFixture, Of3_ReturnsSelf) {
	EXPECT_THAT(prime_factor.of(3), ElementsAre(3));
}
