#include<stdio.h>
#include<stdlib.h>
int sum(int*,int );
int main() {
	int i;
	int a[100];
	int length;
	printf("Please enter the length of the array:\n");
		scanf_s("%d", &length);
		printf("Please enter the array:\n");
		for (i = 0; i < length; i++) {
			scanf_s("%d", &a[i]);
		}
		sum(a[length],length);
		system("pause");

}
int sum(int a[],int length) {
	int SUM;
	
	
	SUM = a[length-1] + sum(a[length - 2], length - 2);
	if (length < 0)
	printf("%d", SUM);
	return SUM;
}