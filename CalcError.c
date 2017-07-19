#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define DF(k,x,h) fabs((k*cos(k*x))-((sin(k*(x+h))-(sin(k*x)))/h))
/*
 *created by Arya HajiTaheri
 */
#pragma warning(disable:4996)
int main() {
	double j, k = 0, h = 0.0, N = 0, x = 0;
	double absErr = 0.0, relErr;
	printf("Enter k: ");
	scanf("%lf", &k);
	printf("Enter N: ");
	scanf("%lf", &N);
	h = 1 / N;
	for (j = 0; j <= N; j++) {
		x = j*h;
		absErr += DF(k,x,h);
	}
	relErr = absErr / k;
	printf("%lf\n", absErr);
	printf("%lf\n", relErr);

	system("pause");
	return 0;
}
