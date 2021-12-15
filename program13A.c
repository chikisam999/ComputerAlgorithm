#include <stdio.h>

int main(void)
{
	int a, b, t;

	scanf("%d %d", &a, &b);

	if(a < b){
		t = a;
		a = b;
		b = a;
	}

	while (b != 0){
		t = a % b;
		a = b;
		b = t;
	}
	printf("GCD = %d\n", a);

	return 0;
}

