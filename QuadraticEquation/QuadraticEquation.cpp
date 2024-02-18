#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void ScanÑoefficient(float* a, float* b, float* c) {
	*a = 0;
	*b = 0;
	*c = 0;
	while (*a == 0) {
		printf("Enter coefficient 'a': ");
		scanf("%f", a);
		if (*a == 0) printf("Coefficient 'a' should not be equal to zero.\n");
	}
	printf("Enter coefficient 'b': ");
	scanf("%f", b);
	printf("Enter coefficient 'c': ");
	scanf("%f", c);
}

void PrintRes(int numofres, float res1, float res2) {
	if (numofres == 0) printf("\nThis equation has no real roots");
	if (numofres == 1) printf("\nRoot of this equation is: x=%f", res1);
	if (numofres == 2) printf("\nRoots of this equation are: x1=%f, x2=%f", res1, res2);
}

void SolveEquation(float a, float b, float c) {
	float D = 0;
	float res1 = 0;
	float res2 = 0;
	int numofres = 0;
	D = b * b - 4 * a * c;
	if (D == 0) {
		numofres = 1;
		res1 = -b / 2 / a;
	}
	if (D > 0) {
		numofres = 2;
		res1 = (-b + sqrt(D)) / 2 / a;
		res2 = (-b - sqrt(D)) / 2 / a;
	}
	PrintRes(numofres, res1, res2);
}

int main(void) {
	float a, b, c;
	ScanÑoefficient(&a, &b, &c);
	SolveEquation(a, b, c);
	return 0;
}
