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