#include <stdio.h>

int main(int argc, char *argv[1]){
	int n,tmp,min,i;
	int a[100];
	if(argc != 2){
		printf("使い方\n");
		printf("ensyu11.c 変数の数\n");
		return -1;
	}
	
	n = argc;

	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}

	min = a[0];

	for(i=0;i<n;i++){
		if(a[i]<min){
			min = a[i];
		}
	}

	printf("MIN: %d\n", min);
	return 0;
}

