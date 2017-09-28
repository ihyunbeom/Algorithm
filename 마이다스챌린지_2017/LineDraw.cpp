#include<stdio.h>

int factorial(int n)
{
	if (n == 1) {
		return 1;
	}
	else {
		return n*factorial(n - 1);
	}
}

int nPr(int n, int r)
{
	if (n <= r)
		return 1;
	return (factorial(n) / factorial(n - r));
}

int main(void)
{
	int N;
	int M;
	int i, j, cnt;
	int result,result2;

	scanf("%d", &N);

	M = N * 2;

	
	result = nPr(M - 1, 1) * nPr(M - 3, 1) * nPr(M - 5, 1);
	
	result2 = nPr(N, 1) * N - nPr(N, 2) / 2 - 1;

	printf("%d\n", result - result2);



	return 0;
}