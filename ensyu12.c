#include <stdio.h>

int main(void){
	int num, n, i;
	printf("Please Enter 10 or 11\n");
	scanf("%d", &num);
	
	
	/*素数を判定するための材料*/
	int a[] = {1,1,0,0,1,0,1,0,1,1};
	int b[] = {2,3,5,7};

	if (num!= 10 && num !=11){
		printf("Do not Input other numbers\n");
		return -1;
	}

	if (num == 10){
		printf("1桁の整数を入力してください\n");
		scanf("%d", &n);
		for(i=0;i<4;i++){
			if(b[i] == n){
				printf("%d は素数でした。\n", n);
				return 0;
			}else{
				printf("%d は素数ではありません\n", n);
				return 0;
			}
		}
	}

	if(num == 11){
		printf("1桁の整数を入力してください\n");
		scanf("%d", &n);
		if(a[n] == 0){
			printf("%dは素数でした\n", n);
			return 0;
		}else{
			printf("%dは素数ではありませんでした\n", n);
			return 0;
		}
	}
}
