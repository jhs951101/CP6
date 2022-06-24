#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int n = 3;
	int sum = 0;

	while(n <= 100){
		sum += n;
		n += 3;
	}

	printf("1부터 100 사이의 모든 3의 배수의 합은 %d입니다.\n", sum);

	return 0;
}