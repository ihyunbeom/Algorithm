#include<stdio.h>

int main(void)
{
	int N, M;
	int i,j;
	int sum;
	sum = 0;

	scanf("%d", &M);
	scanf("%d", &N);

	for (i = M; i <= N; i++) {
		for (j = 2; j <= i - 1; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {
			sum += i;
		}
	}
	if (sum == 0)
		sum = -1;

	printf("%d\n", sum);

	return 0;
}