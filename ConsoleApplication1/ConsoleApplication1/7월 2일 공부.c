#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//printf("Hello World!\n");

	/*char name[20]; /이름을 입력하려면 문자열로 입력해야 하므로
	char gender;
	int year, month,age;
	float height;
	printf("이름,출생년도,출생월,성별(m/f),키(cm)를 입력하세요:\n");
	scanf("%s %d %d %c %f", name,&year,&month,&gender,&height);//name은 이름이므로 문자하나가 아닌 문자열을 입력해야 함 따라서 name으로 적어 name 전체인 배열을 입력시켜야 함
	if (month < 8) {
		age = (2025 - year);
	}
	else {
		age = (2025 - year) - 1;
	}
	printf("\n안녕하세요.\n저는 이름이 %s이고, 만 %d살입니다.\n", name, age);
	//&는 주소로 scanf일때 입력시 쓰지만,printf는 그대로
	printf("성별은 ");
	switch (gender)
	{
	case 'f':
		printf("여"); // ""은 문자열로 인식하고 ''은 문자로 인식
	break;
	case 'm':
		printf("남"); 
		break;
	default:
		printf("알 수 없음");
		break;
	}
	printf("이고, 키는 %.1fcm입니다.",height);*/
	/*	for (int i = 1; i <= 5; i++) {
		for (int j = 5; i <= j; j--) //이중 for문 순서 안쪽 for문을 바깥쪽 for문 초기조건까지 만족시킴->바깥쪽 for문 실행 ->안쪽 for문을 실행하고 바깥쪽 for문 실행 (의미는 바깥쪽 초기화(i=1) -> 안쪽 반복(j = 5→i) ->바깥쪽 증가(i++)->조건 다시 검사->반복)

		{
			printf("'#'");
		}
		printf("\n");
	}*/
	/*int sum=0;
	int arr[5];
	int max ;
	int min ;
	printf("정수 5개 입력:\n");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
	}
	max = arr[0];// 최대 최소 값을 비교하려면 일단 입력을 해야 하므로
	min = arr[0];
	printf("순차 출력:\n");
	for (int i = 0; i < 5; i++) {
		printf("arr[%d]: %d\n", i, arr[i]);
	}
	printf("배열 전체 출력: "); // 순차출력은 반복문 안에 \n 전체출력은 반복문 밖에 \n
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	printf("배열의 합: %d\n", sum);
	for (int i = 1; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	printf("배열의 최댓값: %d\n", max);
	printf("배열의 최솟값: %d\n", min);*/
	return 0;
}
