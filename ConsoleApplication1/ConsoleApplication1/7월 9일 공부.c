#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*typedef struct fraction {
	int numer;
	int demon;
}FRACTION;

void read_trac(FRACTION* trac) {
	printf("분자, 분모 입력: ");
	scanf("%d %d", &trac->numer, &trac->demon);
	printf("%d / %d ", trac->numer, trac->demon);
}*/
void main() {
	// FILE* fp,*fpw; 0~3
	/*char a;
	a = fgetc(stdin);
	fputc(a, stdout);
	fscanf(stdin, "%c", &a);
	fprintf(stdout, "안녕하세요~~~%c\n", a); 0
	*/
	/*
	fp = fopen("output.txt", "w"); //쓰기용 텍스트 화일
	fprintf(stdout, "안녕하세요~~~\n");
	for (int i = 1; i < 100; i++){
		fprintf(fp, "%d", i);
		fprintf(fp, "%f", i * 3.14);
		fprintf(fp, "안녕하세요~~~\n");
	}

	fputc('y', fp);

	fputs("안녕하세요 fputs",fp);

	fclose(fp);1
	*/
	/*	fp = fopen("output.txt", "r");
		fpw = fopen("result.txt", "w");
		int arr[10] ;
		int total = 0;
		for (int i = 0; i < 10; i++) {
			fscanf(fp, "%d",&arr[i]);
			total += arr[i];
			printf("% d", arr[i]);
		}
		printf("들의 총합은 %d ", total);

		for (int i = 0; i < 10; i++) {
			fprintf(fpw,"% d", arr[i]);
		}
		fprintf(fpw,"들의 총합은 %d ", total);
		fclose(fp);
		fclose(fpw); 2
		*/
		/*fp = fopen("output.txt", "rb");
		fpw = fopen("result1.txt", "wb");

		int arr[256];
		fread(arr, 4,10,fp); //arr값을 4바이트식 10번 반복해서 fp로 읽어드려오기
		fwrite(arr, 4, 10, fpw);
		fclose(fp);
		fclose(fpw); 3
		*/
		/*FILE* fin, * fout;
		int i;
		int data[10] = { 10,15,20,30,40,50,60,70,80,90 };
		int read_data[10];
		fout = fopen("binaryfile.bin","wb");
		fwrite(data, 4, 10, fout);
		fclose(fout);
		fin = fopen("binaryfile.bin", "rb");
		fread(read_data, 4, 10, fin);
		for (i = 0; i < 10; i++)
			printf(" %d", read_data[i]);
		fclose(fin);*/
		/*int i;
		int* data ;
		int cnt;
		printf("학생수 =>");
		scanf("%d", &cnt);

		data = (int*)malloc(cnt * sizeof(int));
		for (i = 0; i < cnt; i++) {
			printf("입력 => ");
			scanf("%d", &data[i]);
		}
		for (i = 0; i < cnt; i++)
		{
			printf("%d", &data[i]);
		}*/
		/*FRACTION trac1;
		FRACTION* tp = &trac1;

		read_trac(tp);

		printf("%d / %d", tp->numer, tp->demon);
		*/

	/*typedef struct human {
		int num;
		char name[20];
		human* next;
	}human;
	human* head;
	head = (human*)malloc(sizeof(human));*/ 링크드리스트를 위한 동적할당과 구조체 기본설명
	/*int* test;

	test = (int*)malloc(sizeof(int));

	test[0] = 5;
	printf("[0]%d\n", test[0]);

	test = (int*)realloc(test, sizeof(int) * 2);

	test[1] = 10;
	printf("[0]%d\n", test[0]);
	printf("[1]%d\n", test[1]);*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//	typedef struct data {
//		int num;
//		char name[20];
//		struct data* next;
//	}data;
//	data* g_head = NULL;
//	data* g_tail = NULL;
//	char name[20];
//	void printAll() {
//		data* temp = g_head;
//		while (temp->next) {
//			printf("=s=\n");
//			printf("num:%d\n", temp->num);
//			printf("name:%s\n", temp->name);
//			printf("=e=\n");
//			temp = temp->next;
//		}
//		printf("=s=\n");
//		printf("num:%d\n", temp->num);
//		printf("name:%s\n", temp->name);
//		printf("=e=\n");
//	}
//	int insert(int num, char* name)
//	{
//		data* node = malloc(sizeof(data));
//		node->num = num;
//		if (name != NULL) {
//			strcpy(node->name, name);
//		}
//		node->next = NULL;
//		if (g_head == NULL) {
//			g_head = node;
//			g_tail = node;
//			return 1;
//		}
//		else {
//			data* temp = g_head;
//			while (temp->next) {
//				temp = temp->next;
//			}
//			temp->next = node;
//			g_tail = node;
//			return 1;
//		}
//		return 0;
//	}
//	int main() {
//		for (int i = 0; i < 10; i++) {
//			sprintf(name, "test %d", i);
//			insert(i, name);
//		}
//		printAll();
//		return 1; // 링크드 리스트 정리
//	}
}