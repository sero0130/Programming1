#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void printweight(void);

int main(void)
{
	printweight();


	return 0;
}

void printweight(void)
{
	float weight = 0;

	printf("몸무게?");
	scanf("%f", &weight);

	printf("입력한 몸무게는 %.2fKG입니다.\n", weight);

	return;
}