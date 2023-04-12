#include <stdio.h>
#define SIZE 7

void square_array(int a[], int size);
void print_array(int a[], int size);

int main(void)
{
	int list[SIZE] = { 1,2,3,4,5,6,7 };    

	print_array(list, SIZE);           //list는 배열의 이름
	square_array(list, SIZE);          //배열은 원본이 전달됨 
	print_array(list, SIZE);

	return 0;
}

void square_array(int a[], int size)   //배열의 원본이 a[]로 전달
{
	int i;

	for (i = 0; i < size; i++)
		a[i] = a[i] * a[i];            
}
void print_array(int a[], int size)    //배열의 원본이 a[]로 전달
{
	int i;

	for (i = 0; i < size; i++)
		printf("%3d", a[i]);
	printf("\n");
}