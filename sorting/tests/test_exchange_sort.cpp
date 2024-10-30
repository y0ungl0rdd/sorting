
#include "catch.hpp"
#include "exchange_sort.cpp"

TEST_CASE() {
	int array[7] = { 9, 8, 7, 5, 3, 2, 1 };
	int n = 7;
	ExchangeSort(n, array);
	bool flag = true;
	for (int i = 0; i < n - 1; i++) {
		if (array[i] > array[i + 1]) flag = false;
	}
	REQUIRE(flag);
}

TEST_CASE() {
	int array[7] = {};
	int n = 7;
	ExchangeSort(n, array);
	(n, array);
	bool flag = true;
	for (int i = 0; i < n - 1; i++) {
		if (array[i] > array[i + 1]) flag = false;
	}
	REQUIRE(flag);
}

TEST_CASE() {
	double array[7] = { 9, 8, -7, 5, 3.5, 3.4, 1 };
	int n = 7;
	ExchangeSort(n, array);
	bool flag = true;
	for (int i = 0; i < n - 1; i++) {
		if (array[i] > array[i + 1]) flag = false;
	}
	REQUIRE(flag);
}