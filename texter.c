/*
 * texter.c
 *
 *  Created on: 16 Dec 2019
 *      Author: zohar
 */
#include "texter.h"
#include <stdio.h>
#include <string.h>
 char op;
 char word[WORD];

int putword(char s[]){
	char c= getchar();
	if (c == EOF) return -1;
	int index=0;
	while(c== ' ' || c=='\n' || c== '\t') c=getchar();
	if(c == EOF) return 1;
	while (c!= ' ' && c!='\n' && c!= '\t'&&c!= EOF &&index<WORD){
		s[index]=c;
		index++;
		c=getchar();
	}
	s[index]=0;
	return index;
}

int putline(char s[]){
	char c=getchar();
	if (c == EOF) return -1;
	int index=0;
	while(c=='\n'){
		c =getchar();
	}
	if(c==EOF) return 1;
	while(c!='\n' && index<LINE && c!=EOF){
		s[index]=c;
		c=getchar();
		index++;
	}
	s[index]=0;
	return index;
}

int isEqual(char* str1,char* str2){
	int len1 = strlen(str1);
	int len2=strlen(str2);
	if(len1<len2) return 0;
	for(int i=0;i<len2;i++){
		if(str1[i]!=str2[i])return 0;
	}
	return 1;
}

int substring(char* str1,char* str2){
	int len = strlen(str1);
	for(int i=0;i<len;i++){
		if(isEqual(str1+i,str2))return 1;
	}
	return 0;
}

void print_lines(char* str){
	char line[LINE];
	int num=putline(line);
	while (num>0){
		if(substring(line, str)){
			printf("%s\n",line);
		}
		num=putline(line);
	}
}
void print_similar_words(char* str){
	char w[WORD];
	int num = putword(w);
	while(num>0){
		if(similar(w,str,1)){
			printf("%s\n",w);
		}
		num=putword(w);
	}
}

int similar(char* s, char* t, int n){
	int lens=strlen(s);
	int lent=strlen(t);
	if(lens-lent<0 || lens-lent>n) return 0;
	int notEqual=0;
	while(*t!=0){
		if(*s!=*t){
			s++, notEqual++;
			if(notEqual>n) return 0;
	}
		else{
			s++,t++;
		}
}
	return 1;
}






