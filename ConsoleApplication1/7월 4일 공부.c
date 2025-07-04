#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
//void uf1(); //함수 원형 //함수 선언
//int udf2() {
//	srand(time(NULL));
//	/*int ran = rand() % 10 + 1;
//	return ran;*/
//	return rand() % 10 + 1;// 1~10 중 임의의 정수
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
// call by value 방식
//void swap(int x,int y) { // a=10 b=20
//	int tmp;
//	printf("swap 함수 내:");
//	printf("x=%d y=%d\n", x, y);
//	tmp = x;
//	x = y;
//	y = tmp;
//	printf("swap 함수 내 교환 후:");
//	printf("x=%d y=%d\n", x, y);
//}
void swap(int* x, int* y) { // & *
	int tmp;
	printf("swap 함수 내:");
	printf("x=%d y=%d\n", *x, *y);
	tmp = *x;
	*x = *y;
	*y = tmp;

	printf("swap 함수 내 교환 후:");
	printf("x=%d y=%d\n", *x, *y);
}
void main() {
	int x = 10; int y = 20;
	printf("교환 전: ");
	printf("x=%d y=%d\n", x, y);
	swap(&x, &y);
	printf("교환 후: ");
	printf("x=%d y=%d\n", x, y);
	//long long  x =10;
	//long long *xp; //포인터가 총 8byte로 메모리에 저장
	//xp = &x; //xp라는 포인터에 x의 주소를 입력
	//printf("x =%ld,주소 =%p,크기=%d \n", x, &x, sizeof(x));
	//printf("xp = %p xp 크기= %d  xp주소 =%p \n", xp,sizeof(xp),&xp);

	/*int x = 10; int y = 20;
	printf("교환 전: ");
	printf("x=%d y=%d\n", x, y);
	swap(x, y);
	printf("교환 후: ");
	printf("x=%d y=%d\n", x, y);*/
	/*int n;*/
	//int total = 0; //반드시 0으로 초기화해야 누적 합 계산이 올바르게 됨. 초기화하지 않으면 쓰레기 값이 들어가 결과가 이상해짐.
	//int factorial = 1; //팩토리얼 이므로 0!=1로 초기화 해야 올바르게 !계산이 됨. 이유는 누적 합과 동일함
//	uf1();//함수 호출
//	/*printf("정수입력=>");
//	scanf("%d", &n);*/
//	n = udf2();
//	udf3(10, 3);
//	printf("%d!은 %d\n",n, udf4(n));
//	/*for (int i = 1; i <= n; i++) {
//	total += i;
//	factorial *= i;
//	}
//	printf("%d부터 1까지의 합은 %d\n", n,total);
//	printf("%d!은 %d\n",n, factorial);*/
//
//	uf1();
//}
//
//
//
//void uf1(void) { //함수정의
//	printf("udf1 함수 시작\n");
//	printf("사용자 정의 함수 실습니다. \n");
//	printf("이 함수는 리턴값이 없는 void형 함수입니다.\n");
//	printf("udf1 함수 종료\n");
}