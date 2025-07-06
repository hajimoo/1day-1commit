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
	/*&는 주소로 scanf일때 입력시 쓰지만,printf는 그대로*/
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
	
	return 0;
}
