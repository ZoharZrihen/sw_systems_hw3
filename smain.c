/*
 * main.c
 *
 *  Created on: 15 Dec 2019
 *      Author: r2rb
 */
#include "fsort.h"
#include <stdio.h>
int main(){
	printf("Please insert 50 numbers for the array: \n");
	for (int k=0;k<N;k++)
		if (scanf("%d",(arr+k)) != 1) return 1;
	insertion_sort(arr,N);
	for (int i=0;i<N-1;i++)
		printf("%d,",*(arr+i));
	printf("%d",*(arr+N-1));



}


