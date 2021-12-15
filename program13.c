/*ユークリッドの互除法である、aとbの最大公約数は(a-b)の最大公約数でもある
 * を利用して入力された2つの整数の最大公約数を求めるプログラムである。*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[1])
{
	int a,b,common,tmp;
	
	printf("最大公約数を求めたい2数を入力してください。\n");
	printf("入力例：A B （ただしA>Bの形で入力すること)\n");
	
	scanf("%d %d", &a, &b);
	
	/*a-bを最初に行っておく*/
	
	if(a < b){
		tmp = a;
		a = b;
		b = tmp;
	}

	a = a-b;
	while(a != b){
		tmp = a - b;
		a = b;
		b = tmp;
		printf("A:%d, B:%d\n", a, b);
	}
	
	printf("最大公約数：%d\n", a);
	return 0;
}


	
