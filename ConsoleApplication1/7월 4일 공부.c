#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
//void uf1(); //�Լ� ���� //�Լ� ����
//int udf2() {
//	srand(time(NULL));
//	/*int ran = rand() % 10 + 1;
//	return ran;*/
//	return rand() % 10 + 1;// 1~10 �� ������ ����
//}
//void  udf3(int a, int b) {
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//}
//int udf4(int n) {
//	int factorial = 1;
//	for (int i = 1; i <= n; i++) {
//		factorial *= i;
//	}
//	return factorial;
//}
// call by value ���
//void swap(int x,int y) { // a=10 b=20
//	int tmp;
//	printf("swap �Լ� ��:");
//	printf("x=%d y=%d\n", x, y);
//	tmp = x;
//	x = y;
//	y = tmp;
//	printf("swap �Լ� �� ��ȯ ��:");
//	printf("x=%d y=%d\n", x, y);
//}
void swap(int* x, int* y) { // & *
	int tmp;
	printf("swap �Լ� ��:");
	printf("x=%d y=%d\n", *x, *y);
	tmp = *x;
	*x = *y;
	*y = tmp;

	printf("swap �Լ� �� ��ȯ ��:");
	printf("x=%d y=%d\n", *x, *y);
}
void main() {
	int x = 10; int y = 20;
	printf("��ȯ ��: ");
	printf("x=%d y=%d\n", x, y);
	swap(&x, &y);
	printf("��ȯ ��: ");
	printf("x=%d y=%d\n", x, y);
	//long long  x =10;
	//long long *xp; //�����Ͱ� �� 8byte�� �޸𸮿� ����
	//xp = &x; //xp��� �����Ϳ� x�� �ּҸ� �Է�
	//printf("x =%ld,�ּ� =%p,ũ��=%d \n", x, &x, sizeof(x));
	//printf("xp = %p xp ũ��= %d  xp�ּ� =%p \n", xp,sizeof(xp),&xp);

	/*int x = 10; int y = 20;
	printf("��ȯ ��: ");
	printf("x=%d y=%d\n", x, y);
	swap(x, y);
	printf("��ȯ ��: ");
	printf("x=%d y=%d\n", x, y);*/
	/*int n;*/
	//int total = 0; //�ݵ�� 0���� �ʱ�ȭ�ؾ� ���� �� ����� �ùٸ��� ��. �ʱ�ȭ���� ������ ������ ���� �� ����� �̻�����.
	//int factorial = 1; //���丮�� �̹Ƿ� 0!=1�� �ʱ�ȭ �ؾ� �ùٸ��� !����� ��. ������ ���� �հ� ������
//	uf1();//�Լ� ȣ��
//	/*printf("�����Է�=>");
//	scanf("%d", &n);*/
//	n = udf2();
//	udf3(10, 3);
//	printf("%d!�� %d\n",n, udf4(n));
//	/*for (int i = 1; i <= n; i++) {
//	total += i;
//	factorial *= i;
//	}
//	printf("%d���� 1������ ���� %d\n", n,total);
//	printf("%d!�� %d\n",n, factorial);*/
//
//	uf1();
//}
//
//
//
//void uf1(void) { //�Լ�����
//	printf("udf1 �Լ� ����\n");
//	printf("����� ���� �Լ� �ǽ��ϴ�. \n");
//	printf("�� �Լ��� ���ϰ��� ���� void�� �Լ��Դϴ�.\n");
//	printf("udf1 �Լ� ����\n");
}