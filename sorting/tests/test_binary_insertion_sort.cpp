

#include "catch.hpp"
#include "binary_insertion_sort.h"

TEST_CASE() {
	int N = 5;
	bool flag = 1;
	int Array[5] = { 8, 6, 3, 2, 5 };
	binary_insertion_sort(N, Array);
	for (int i = 0; i < N - 1; i++) {
		if (Array[i] > Array[i + 1]) flag = 0;
	}
	REQUIRE(flag);
}

TEST_CASE() {
	int N = 5;
	bool flag = 1;
	int Array[5] = {};
	binary_insertion_sort(N, Array);
	for (int i = 0; i < N - 1; i++) {
		if (Array[i] > Array[i + 1]) flag = 0;
	}
	REQUIRE(flag);
}


TEST_CASE() {
	int N = 5;
	bool flag = 1;
	double Array[5] = { 8.2, 6.1, -3.2, 2.5, 5.7 };
	binary_insertion_sort(N, Array);
	for (int i = 0; i < N - 1; i++) {
		if (Array[i] > Array[i + 1]) flag = 0;
	}
	REQUIRE(flag);
}