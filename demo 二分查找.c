#include<stdio.h>
#include<stdlib.h>
void search_num(int a[], int, int, int,int);
int main() {
	int length;
	int num, start, end, mid;
	int a[10000];
	printf("Please enter the number:\n");
	scanf_s("%d", &num);
	printf("Please enter the length of the array:\n");
	scanf_s("%d", &length);
	for (int i = 0; i < length; i++) {
		a[i] = i + 1;
	}
	if (num > length||num<=0) {
		printf("Failed,please enter again!\n");
		system("pause");
			return -1;
	}
	start = a[0];
	end = a[length - 1];
	mid = (start + end) / 2;
	search_num(a, start, end, mid,num);
	system("pause");
	return 0;
}
void search_num(int a[], int start, int end, int mid,int num) {
	int n;
	int put = num;
	for (n = 1; start <= end; n++) {
		if (put < mid)
			end = mid - 1;
		if (put > mid)
			start = mid + 1;
		if (put == mid) {
			printf("the number needs %d times to find.And a[%d]=%d\n", n, mid - 1, put);
			break;
		}
		mid = (start + end) / 2;
	}

}