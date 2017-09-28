#include<stdio.h>
int sosu(int n) {
	int i;

	for (i = 2; i < n; i++) {
		while (n%i == 0)
			n /= i;
		if (n == 1) {
			n = i;
			break;
		}
	}
	return n;
}

int main(void)
{
	int N, M;
	int midas[100000];
	int soinsu[100000];
	int i,cnt;
	cnt = 0;

	scanf("%d", &N);
	scanf("%d", &M);

	for (i = 2; i < N; i++) {
		midas[i] = sosu(i);
		if (midas[i] <= M)
			cnt++;		
	}
	printf("%d\n", cnt);

	return 0;
}
