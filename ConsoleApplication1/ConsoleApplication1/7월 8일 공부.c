﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	//typedef struct student STUDENT;
	//typedef long long lint; // long long 대신 lint로 쓴다는 거 //lint a;
	typedef struct student {
		int hakbun;
		char nam[20];
		int mid;
		int final;
		int quize;
		int total;
		float avg;
	}STUDENT;

	//STUDENT stu[3] = {{1001,"mkchoi",30,28,28,0,0.0},
	//		{1002,"jskim",30,50,28,0,0.0},
	//	{1003,"pklee",25,25,25,0,0.0} };
	//printf("학번\t 이름\t 중간\t기말\t퀴즈\t 총점\t평균\n");
	///*printf("%d\t %s\t %d\t %d \t %d\n ", stu[0].hakbun, stu[0].nam, stu[0].mid, stu[0].final, stu[0].quize);
	//printf("%d\t %s\t %d\t %d \t %d\n ", stu[1].hakbun, stu[1].nam, stu[1].mid, stu[1].final, stu[1].quize);
	//printf("%d\t %s\t %d\t %d \t %d\n ", stu[2].hakbun, stu[2].nam, stu[2].mid, stu[2].final, stu[2].quize);*/ // 반복문
	//for (int i = 0; i <= 2; i++) {
	//	stu[i].total = stu[i].mid + stu[i].final + stu[i].quize;
	//	stu[i].avg = stu[i].total / 3.0;
	//	printf("%d\t %s\t %d\t %d \t %d\t ", stu[i].hakbun, stu[i].nam, stu[i].mid, stu[i].final, stu[i].quize);
	//	printf("%3d\t %.2f\n", stu[i].total, stu[i].avg);
	//}
	//typedef struct fraction {
	//	int mumerator;
	//	int denominator;
	//}분수;
	//분수 stu1 = { 2,3 };
	//분수 stu2 = { 4,5 };

	//printf("%d / %d  * %d /%d = %d / %d\n", stu1.mumerator, stu1.denominator, stu2.mumerator, stu2.denominator, (stu1.mumerator* stu2.mumerator), (stu1.denominator* stu2.denominator));
	//printf("%d / %d / %d / %d = %d / %d\n", stu1.mumerator, stu1.denominator, stu2.mumerator, stu2.denominator, (stu1.mumerator* stu2.denominator), (stu2.mumerator* stu1.denominator));
 //  
	//// 위치(위도,경도) 정보를 표현하는 구조체(position) 정의
 //  struct position{
 //  double  latitude;
 //  double longitude;
 //  };
 //  // 도시 이름,위치를 표현하는 구조체(city)
 //  struct city {
 //  char *name; // char 포인터
 //  //char name[20]; // char 배열
 //  struct position place;
 //  };
 //  struct city  seoul;
 //  seoul.name = "seoul"; //포인터
 //  //strcpy(seoul.name, "seoul");   // 배열
 //  seoul.place.latitude = 37.33;
 //  seoul.place.longitude = 126.58;
 //  struct city newyork = { "newyork",{40.8,73.9} };
 //  printf("%s %f %f\n", seoul.name, seoul.place.latitude, seoul.place.longitude);  
 //  printf("%s %f %f\n", newyork.name, newyork.place.latitude, newyork.place.longitude);


   /*printf("학번\t 이름\t 중간\t기말\t퀴즈 점수 입력: \n");
   STUDENT stu[3];
	for (int i = 0; i <= 2; i++) {
		scanf("%d%s%d%d %d", &stu[i].hakbun, stu[i].nam, &stu[i].mid, &stu[i].final, &stu[i].quize);
	}
	printf("학번\t 이름\t 중간\t기말\t퀴즈\t 총점\t평균\n");
	for (int i = 0; i <= 2; i++) {
		stu[i].total = stu[i].mid + stu[i].final + stu[i].quize;
		stu[i].avg = stu[i].total / 3.0;
		printf("%d\t %s\t %d\t %d \t %d\t ", stu[i].hakbun, stu[i].nam, stu[i].mid, stu[i].final, stu[i].quize);
		printf("%3d\t %.2f\n", stu[i].total, stu[i].avg);
	}*/

	/*STUDENT stu = { 1001, "mkchoi", 30, 28, 28, 0, 0.0 };
	STUDENT* p = &stu;
	printf("%3d %s %3d %3d %3d\n", (*p).hakbun, (*p).nam, (*p).mid, (*p).final, (*p).quize);
	printf("%3d %s %3d %3d %3d\n", p->hakbun, p->nam, p->mid, p->final, p->quize);*/
}