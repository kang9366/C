#include<stdio.h>

int main(void) {
	int array[3] = { 10, 20, 30 };
	int** ipp = NULL;
	int* ip = NULL;
	
	ip = array;
	ipp = &ip;

	printf("%d %d %d", *(ip+0), *(ip+1), *(ip+2));
}