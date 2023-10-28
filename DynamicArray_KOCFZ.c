/*
Revision: 
1. WAP to implement Dynamic Array. 
  ( Hint: Use DMA)
*/
#include<stdio.h>
#include<malloc.h>
#define SIZE 5
void main()
{
	// Reserve Space 
	int* arr = (int*)malloc(SIZE*sizeof(int));
	int count; 
	//Take Input
	for(count=0; count < SIZE; count++)
	{
		printf("\n Enter Element[%d] = ",count+1);
		scanf("%d",arr);
		arr++;
	}
	//Display Data 
	for(count=0; count < SIZE; count++)
	{
		printf("\n Enter Element[%d] = %d",count+1,*arr);		
		arr++;
	}
	
}
