
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("�п�J���:");
	scanf("%d",&a);
	printf("�ɶ���%02d�p��%02d��%02d��:\n",a/3600,a/60%60,a%60);
	system("pause");
	return 0;
}
