/*
 * main.c
 *
 *  Created on: 16 Dec 2019
 *      Author: zohar
 */
#include "texter.h"
#include <stdio.h>


int main(){
	printf("Enter your text: ");
	putword(word);
	if (scanf(" %c",&op)!=1) return 1;
	if(op =='a'){
		print_lines(word);
	}
	else if(op == 'b'){
		print_similar_words(word);
	}
	return 0;
}

