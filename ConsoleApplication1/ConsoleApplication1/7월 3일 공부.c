#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // time과 stdlib에 각각 time함수와 srand 함수가 존재
#define cnt 100
/*int main() {
	int data[cnt];
	int total = 0;
	int max = 0;
	int min = 100;
	srand(time(NULL)); // srand는 난수발생기 ()는 시작값을 넣는 거고 시작값에 time(NULL)을 넣은 거고  time()은 현재 시간을 초단위로 반환하거고 NULL을 넣으면 현재 시간을 반환하라임
	for (int i = 0; i < cnt; i++) {
		data[i] = rand() % 100 + 1;
		printf("%3d", data[i]);
		(i + 1) % 10 ? printf(" ") : printf("\n"); //조건 ? 참일 때 실행 : 거짓일 때 실행
		total += data[i];
		if (max <= data[i]) { //비교연산자 자주 틀리고 for문에서 어디까지 괄호쳐야 할지 헷갈림
			max = data[i];
		}
		if (min >= data[i])
		{
			min = data[i];
		}
	}
	printf("total =%d\n", total);
	printf("average =%.2f\n", total / (float)cnt); // total 앞에 (float)붙여도 됨 
	printf("max=%d min=%d", max, min);
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int data[5];
    int total = 0;
    int max;
    int min;

    for (int i = 0; i < 5; i++) {
        printf("enter score => ");
        scanf_s("%d", &data[i]);

        printf("data[%d] = %d\n", i, data[i]);
        printf("data[%d]'s address = %p\n", i, &data[i]);

        total += data[i];

        if (i == 0) {
            max = data[i];
            min = data[i];
        }

        int max1 = max;
        int min1 = min;

        if (data[i] >= max1) {
            max = data[i];
        }
        if (data[i] <= min1) {
            min = data[i];
        }
    }

    printf("total = %d\n", total);
    printf("average = %.2f\n", total / (float)5);
    printf("max is %d\n", max);
    printf("min is %d\n", min);

    return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define cnt 100
//int main() {
//	int data[5][2] = { {80,90},{50,70},{90,80},{70,50},{90,80} };// 배열에서 첫번째는 행 두번째는 열로 표현
//	int sum = 0;
//	int sum1 = 0;
//	printf("\t중간\t기말\t 총합\t평균\n");
//	for (int i = 0; i < 5; i++) {
//		int total = 0;// 총합을 학생 개별적으로 구하려면 total은 반복문앞에 존재해야 함
//		printf("student %d\t",i+1);
//		for (int j = 0; j < 2; j++) {
//			printf("%3d", data[i][j]);
//			total += data[i][j];//total이 for j문 안에 있어야 하는 이유는 이 data 배열이 j를 포함하기때문
//		}
//		printf(" %d\t", total);
//		printf("%.f\t", total / 2.0);
//		
//		sum += data[i][0];
//		sum1 += data[i][1];
//		printf("\n");
//	}
//	printf(" 총합\t%d\t%d\n", sum, sum1);
//	printf(" 평균\t%.2f\t%2.f", sum / 5.0, sum1 / 5.0);
//	return 0;
//}
*/


