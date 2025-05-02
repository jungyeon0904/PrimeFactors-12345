#include <vector>
#include "prime-factors.cpp"
#include "gmock/gmock.h"

using namespace std;

TEST(PrimeFactors, Of1) {
	PrimeFactors prime_factor;
	vector<int> expected{};
	EXPECT_EQ(expected, prime_factor.of(1));;

}