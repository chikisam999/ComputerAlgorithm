#include <stdio.h>

int main(void);

int main(void){
	int a,b,c;
	int max;
	
	printf("比較したい3つの整数を入力してください。\n");
	scanf("%d %d %d",&a, &b, &c);
	max = a;

	if(max < b){
		max = b;
	}
	if(max < c){
		max = c;
	}

	printf("MAX = %d\n", max);

	return 0;
}

