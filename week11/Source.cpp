#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int* p1;
char* p2;
int x = 0;
int chk1 = 0;
struct data
{
	char Name[100];
	int Age;
};
struct data t1, t2, t3;

int inpdata() {
	printf("Input name 1:");
	scanf("%s", t1.Name);
	printf("Input age 1:");
	scanf("%d", &t1.Age);
	printf("Input name 2:");
	scanf("%s", t2.Name);
	printf("Input age 2:");
	scanf("%d", &t2.Age);
	printf("Input name 3:");
	scanf("%s", t3.Name);
	printf("Input age 3:");
	scanf("%d", &t3.Age);
	if (t1.Age <= 0 || t2.Age <= 0 || t3.Age <= 0) {
		chk1 = 1;
	}
	return 0;
}
int chk(int* p1) {

	for (int i = 0; i < 3; i++) {
		if (i == 0) {
			p1 = &t1.Age;

		}
		else if (i == 1) {
			p1 = &t2.Age;
		}
		else if (i == 2) {
			p1 = &t3.Age;
		}
		if (*p1 > x) {
			x = *p1;
		}

	}
	if (x == t1.Age) {
		printf("%s", t1.Name);
	}
	else if (x == t2.Age) {
		printf("%s", t2.Name);
	}
	else if (x == t3.Age) {
		printf("%s", t3.Name);
	}
	return x;
}

int main() {
	char x[100];
	int y;
	inpdata();
	if (chk1 == 1) {
		printf("ERROR age have to > 0 Only");
	}
	else chk(p1);
}