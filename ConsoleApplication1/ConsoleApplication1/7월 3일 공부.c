#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define cnt 50

int main() {

	int data[cnt]; //= { 10,20,30,40,50 }; //data[0] ~data[4]
	int total = 0;
	int max = 0;
	int min = 0;
	srand(time(NULL));
	//printf("%d %d\n", rand() % 100, rand());
	for (int i = 0; i < cnt; i++) {
		data[i] = rand() % 100;

		total += data[i];

		printf("data[%d] =%d \n", i, data[i]);
		//printf("data[%d]의 주소 =%p\n", i, &data[i]);
	}
	
	printf("총점 =%d\n", total);
	printf("평균 =%.2f\n", total / (float)cnt); // total 앞에 (float)붙여도 됨 cnt는 100하면 100개 만듬

		/*printf("점수 입력 =>");
		scanf("%d", &data[i]);
	}*/
	/*for (int i = 0; i < 5; i++) {
		printf("data[%d] =%d \n",i,data[i]);
		printf("data[%d]의 주소 =%p\n", i, &data[i]);
	}*/
	for (int i = 0; i < cnt; i++) {
		if (max <= data[i])
			max = data[i];
	}
	printf("최댓값은 %d ", max);

	for (int i = 0; i < cnt; i++) {
		if (min > data[i])
			min = data[i];
	}
	printf("최소값은 %d ", min);
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define cnt 50

int main() {

	//int data[cnt]; //= { 10,20,30,40,50 }; //data[0] ~data[4]
	int data[5][2] = { 80,90,50,70,90,80,70,50,90,80 };
	int total1 = 0;
	int total2 = 0;
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 2; i++) {
			printf("%d", data[j][i]);
			if (i == 0) {
				printf(" ");
				total1 += data[j][i];
			}
			else {
				printf("\n");
				total2 += data[j][i];
			}

		}
		printf("총합은 %d\t %d\n", total1, total2);
	}
	return 0;
}
//int total = 0;
//int max = 0;
//int min = 0;
//srand(time(NULL));
//printf("%d %d\n", rand() % 100, rand());
//int max = data[0]; //0
//int min = data [0]; // 9999
//for (int i = 0; i < cnt; i++) {
//	total+= data[i];


 /*	data[i] = rand() % 100 + 1; //1 ~100
	printf("%3d", data[i]);
	i % 10 ? printf("") : printf("\n");
	//total += data[i];*/

	//printf("data[%d] =%d \n", i, data[i]);
	//printf("data[%d]의 주소 =%p\n", i, &data[i]);


//printf("총점 =%d\n", total);
//printf("평균 =%.2f\n", total / (float)cnt); // total 앞에 (float)붙여도 됨 cnt는 100하면 100개 만듬

/*printf("점수 입력 =>");
scanf("%d", &data[i]);
}*/
/*for (int i = 0; i < 5; i++) {
	printf("data[%d] =%d \n",i,data[i]);
	printf("data[%d]의 주소 =%p\n", i, &data[i]);
}*/
/*	for (int i = 0; i < cnt; i++) {
		if (max <= data[i])
			max = data[i];
	}
	printf("최댓값은 %d ", max);

	for (int i = 0; i < cnt; i++) {
		if (min > data[i])
			min = data[i];
	}
	printf("최소값은 %d ", min);*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int data[5][2] = { 80,90,50,70,90,80,70,50,90,80 };
	int total1 = 0;
	int total2 = 0; // [0][0][0][1]
	for (int j = 0; j < 5; j++) {
		int sum1 = 0;
		for (int i = 0; i < 2; i++) {
			printf("%d\t", data[j][i]);
			sum1 += data[j][i];
			printf("%d\n", sum1);
			sum1 += data[j][i];
			if (i == 0) {
				//printf(" ");
				total1 += data[j][i];
			}
			else {
				total2 += data[j][i];
			}
		}
		printf("\n");
	}
	printf("총합은 %d\t %d\n", total1, total2);
	printf("평균은 %.2lf\t %.2lf\n", total1 / (float)5, total2 / (float)5);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define cnt 100
int main() {
	int sum = 0, sum1 = 0, total = 0;
	int arr[5][2] = { {80,90},{50,70},{90,80},{70,50},{90,80} };
	printf("\t중간\t기말\t  총합\t평균\n");
	for (int i = 0; i < 5; i++) {
		total = 0;
		printf("학생 %d\t", i + 1);
		for (int j = 0; j < 2; j++) {
			printf("%3d\t ", arr[i][j]);
			total += arr[i][j];
		}
		printf(" %d\t", total);
		printf(" %.f\t", total / 2.0);

		sum += arr[i][0];
		sum1 += +arr[i][1];
		printf("\n");
	}

	printf(" 총합\t%d\t%d\n", sum, sum1);
	printf(" 평균\t%.2f\t%2.f", sum / 5.0, sum1 / 5.0);
	return 0;
}
