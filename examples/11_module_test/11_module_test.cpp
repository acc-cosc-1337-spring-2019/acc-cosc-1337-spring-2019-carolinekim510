#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test funcion reference parameter") {
	
	int number = 10;
	int* numberPtr = &number;

	ref(number, numberPtr);
	REQUIRE(number == 1000);
}

