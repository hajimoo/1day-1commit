#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*typedef struct fraction {
	int numer;
	int demon;
}FRACTION;

void read_trac(FRACTION* trac) {
	printf("����, �и� �Է�: ");
	scanf("%d %d", &trac->numer, &trac->demon);
	printf("%d / %d ", trac->numer, trac->demon);
}*/
void main() {
	// FILE* fp,*fpw; 0~3
	/*char a;
	a = fgetc(stdin);
	fputc(a, stdout);
	fscanf(stdin, "%c", &a);
	fprintf(stdout, "�ȳ��ϼ���~~~%c\n", a); 0
	*/
	/*
	fp = fopen("output.txt", "w"); //����� �ؽ�Ʈ ȭ��
	fprintf(stdout, "�ȳ��ϼ���~~~\n");
	for (int i = 1; i < 100; i++){
		fprintf(fp, "%d", i);
		fprintf(fp, "%f", i * 3.14);
		fprintf(fp, "�ȳ��ϼ���~~~\n");
	}

	fputc('y', fp);

	fputs("�ȳ��ϼ��� fputs",fp);

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
		printf("���� ������ %d ", total);

		for (int i = 0; i < 10; i++) {
			fprintf(fpw,"% d", arr[i]);
		}
		fprintf(fpw,"���� ������ %d ", total);
		fclose(fp);
		fclose(fpw); 2
		*/
		/*fp = fopen("output.txt", "rb");
		fpw = fopen("result1.txt", "wb");

		int arr[256];
		fread(arr, 4,10,fp); //arr���� 4����Ʈ�� 10�� �ݺ��ؼ� fp�� �о�������
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
		printf("�л��� =>");
		scanf("%d", &cnt);

		data = (int*)malloc(cnt * sizeof(int));
		for (i = 0; i < cnt; i++) {
			printf("�Է� => ");
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
}