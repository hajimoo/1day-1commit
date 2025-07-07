#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define cnt 100
/*
실습 1. 문자형으로 a-z, A-Z, 0-9 중 한 문자를 입력받아 대문자인자 소문자이지 숫자인지 판별하고, 대문자는 소문자로, 소문자는 대문자로 변환하여 출력하는 프로그램

             무한반복으로 실행되며 '!'  입력시 프로그램 종료

<출력 형태>

문자를 입력하세요 => a

소문자입니다. 변환된 대문자는 A입니다.

문자를 입력하세요 => Z

대문자입니다. 변환된 소문자는 z입니다.

문자를 입력하세요 => 7

숫자입니다.

문자를 입력하세요 => !

프로그램 종료합니다.



실습 2. 100개의 임의의 정수(1~100)를 생성하여 배열에 저장한 후  특정 정수의 값 검색하기

           무한 반복으로 실행되며 'x'입력 시 프로그램 종료

<출력 형태>

100개의 정수가 생성되었습니다.!!!

탐색하고자 하는 수를 입력하세요(종료 X) => 36
검색 실패

탐색하고자 하는 수를 입력하세요(종료 X) => 25
검색 성공!!!

탐색하고자 하는 수를 입력하세요(종료 X) => x

프로그램 종료   if문으로 쓰려면 scanf()의 특징을 이해해야 함 (scanf()는 리턴은 조건을 만족하는 숫자를 리턴함)
*/
int main() {
    /*char a;

    while (1) {
        printf("문자를 입력하세요 => ");
        scanf(" %c", &a);

        if (a == '!') {
            printf("프로그램을 종료합니다.\n");
            break;
        }
        else if ('a' <= a && a <= 'z') {
            printf("소문자입니다. 변환된 대문자는 %c입니다.\n", a - 32);
        }
        else if ('A' <= a && a <= 'Z') {
            printf("대문자입니다. 변환된 소문자는 %c입니다.\n", a + 32);
        }
        else if ('0' <= a && a <= '9') {
            printf("숫자입니다.\n");
        }
        else {
            printf("알 수 없는 문자입니다.\n");
        }
    }
 int data[cnt];
char input[10];
int target;
int found;

srand(time(NULL));
for (int i = 0; i < cnt; i++) {
    data[i] = rand() % 100 + 1;
}
printf("100개의 정수가 생성되었습니다.!!!\n");

while (1) {
    printf("탐색하고자 하는 수를 입력하세요(종료x) => ");
    scanf("%s", input);

    if (input[0] == 'x' && input[1] == '\0') {
        printf("\n프로그램 종료\n");
        break;
    }

    target = atoi(input);//atoi 함수는 문자열을 정수(int)로 변환하는 함수로 인자로 숫자 형태의 문자열을 받음 숫자가 아닌 문자가 있으면 숫자까지만 변환하며 숫자가 아닌 문자열 변환시 0으로 변환하며
    오류처리가 없고 공백처리를 무시하며 오버플로우 위협이 존재함 그리고 헤더 파일로 stdlib.h안에 존재함.
// 숫자가 없으면 0 반환

        found = 0;
        for (int i = 0; i < cnt; i++) {
            if (data[i] == target) {
                found = 1;
                break;
            }
        }

        if (found) {
            printf("검색 성공!!!\n");
        }
        else {
            printf("검색 실패\n");
        }
    }*/


    return 0;
}
