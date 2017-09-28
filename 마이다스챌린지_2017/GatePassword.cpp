#include<stdio.h>
#include <stdlib.h>

int factorial(int n) 
{
	if (n == 1) {
		return 1;
	}
	else {
		return n*factorial(n - 1);
	}
}

int nCr(int n, int r)
{
	if (n <= r)
		return 1;
	return (factorial(n) / (factorial(r) * factorial(n - r)));
}


int main(void)
{
	int N,M;
	int *num;
	int *password;
	int result;
	int even, odd;
	int i;
	result = 0;
	even = odd = 0;

	scanf("%d %d", &N, &M);
	num = (int*)malloc(sizeof(int) * M);
	password = (int*)malloc(sizeof(int) * N);

	for (i = 0; i < M; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 0; i < M; i++) {
		if (num[i] % 2==0 || num[i] == 0)
			even++;
		else
			odd++;
	}

	for (i = 1; i < N; i++) {
		if (i <= even) {
			result += nCr(even, i) * nCr(odd, N - i);
		}
	}
	printf("%d\n", result);

	free(password);
	free(num);
	return 0;
}