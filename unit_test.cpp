#include "gtest/gtest.h"
#include "factory.hpp"
#include "factory_test.hpp"

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
