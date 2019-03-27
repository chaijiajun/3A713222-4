
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("請輸入秒數:");
	scanf("%d",&a);
	printf("時間為%02d小時%02d分%02d秒:\n",a/3600,a/60%60,a%60);
	system("pause");
	return 0;
}
