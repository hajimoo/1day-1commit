#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#define cnt 10
/*
int recursive_fact(int num) {
	//4! = 4*3*2*1 3!=3*2*1 2!=2*1 =>n! =n*(n-1)!
	if (num == 1)
		return 1;
	else
		return num * recursive_fact(num - 1);
}  ����Լ� */
/*
int add(int* a, int* b)
{
	return *a + *b;
}*/
/*
void print_arr(int* list) {
for (int i = 0; i < cnt; i++)
{
printf("%d\t", *(list + i));
}
printf("\n");}
*/
/*
void sort_arr(int arr[]) {
	int tmp;
	for (int i = 0; i < cnt-1; i++)
	for (int j = 0; j < cnt-1 - i; j++)
			if (arr[j] > arr[j + 1]) {
			tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;         //��������(����)
		}
} */
/*
int factorial(int a) {
	int fact = 1;

	for (int i = 1; i <= a; i++) {
		fact *= i;
	}
	return fact;
}*/
void main()
{//for (int i = 1; i <= 10; i++) {
//printf("%d! =%d", i, factorial(i)); 
// 	printf("\n");}
 //printf("%d ", recursive_fact(3));
	//char str[100];
	/*printf("���ڿ� �Է� =>");
	scanf("%s", str);
	printf("���ڿ� ��� => %s", str); //���� ������ ���*/
	/*
	printf("���ڿ� �Է� =>");
	gets(str);
	printf("���ڿ� ��� => %s", str);
	puts(str);
	*/
	/*printf("���ڿ� �Է� =>");
	gets(str);// �����̽��ٵ� �Է����� ����
	//for (int i = 0; i < strlen(str); i++)  // strlen(str)�� ���̸� ���ϴ� �ŷ� <string.h>�� �������
	int i = 0;*/
	/*while (str[i]) { // 0 �̿��� ���� ��
		//printf("%c",str[i++])
		//putchar(str[i++]); //�ѱ��ھ� �Է�
		putchar(*(str + i));
		i++;
	}*/
}
/* int arr[cnt] = { 50,20,10,40,30,60,80,90,70,100 };//	int arr[5] = { 10,20,30,40,50 };
int* p;
p = arr; //p=&arr[0]:
printf("%d %d %d\n", arr[0], *arr,*p);
printf("%d %d %d\n", arr[1], *(arr + 1),*(p+1));
print_arr(arr);
sort_arr(arr);
print_arr(arr);
*/

/*for (int i = 0; i < 5; i++)
{
printf("%d %d %d\n", arr[i], *(arr + i), *(p + i));
} */
/*	int x = 10, y = 20;
int sum = add(&x,&y);
printf("%d", sum);*/
/*
int num = 10;
int* nump = &num;
printf("%d %p %d", num, nump,*nump);
}*/

/*void print_arr(int* arr) {//int arr[]
	for (int i = 0; i < 50; i++) {
	printf("%3d\t", arr[i]);
	printf("%d\t", *(arr + i));
	}
} */

/*void main(){
	int number[50];
	srand(time(NULL));
	for (int i = 0; i < 50; i++) {
	number[i] = rand() % 100 + 1;
	}
	printf("50���� ������ �����Ǿ����ϴ�.!!!\n");
	print_arr(number);
}*/