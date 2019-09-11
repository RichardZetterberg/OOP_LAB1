#include <iostream>

#include "fibo.h"
#include "prime.h"

static const int m = m_is_prime();
static int f1 = 0, f2 = 1, f, n = 83739;
void sFibo(int seed) {
	n = seed;
}

//can use recursion
/*int fibo_int(int i)
{
	int value = 0;
	if (i < 1) return 0;
	if (i == 1) return 1;
	return fibo_int(i - 1) + fibo_int(i - 2);
}*/

int fibo_int() {
	for (int k = 1; k < n; ++k) {
		f = (f1 + f2) % m;
		f2 = f1;
		f1 = f;
	}
	return f1;
}

double fibo() {
	return fibo_int() / double(m);
}

