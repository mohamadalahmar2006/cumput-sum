

#include < iostream>
#include"pow.h"

double pow(int x, int n) {

	double xn = 1;

	for (int i = 0;i < abs(n);i++) {
		xn *= x;
	}
	if (n > 0) {

		return xn;


	}
	else if (n == 0) { return 1; }
	else { return 1 / xn; }
}