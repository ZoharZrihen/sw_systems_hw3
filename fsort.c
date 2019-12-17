/*
 * fsort.c
 *
 *  Created on: 15 Dec 2019
 *      Author: r2rb
 */
#include "fsort.h"
int arr[N]={0};
void shift_element(int* arr,int i){
	int j=0;
	if (i<=0) return;
	for (j=i;j>0;j--)
	{
		*(arr+j)=*(arr+j-1);
	}
	*arr=999;
}
void insertion_sort(int* arr,int len){
	for (int j=1;j<len;j++){
		int temp=*(arr+j);
		int i=j-1;
		int p=0;
		while (i>=0 && *(arr+i)>temp)
		{
			i--;
			p++;
		}
		shift_element(arr+i+1,p);
		*(arr+i+1)=temp;
	}
}
