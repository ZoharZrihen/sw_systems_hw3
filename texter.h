/*
 * texter.h
 *
 *  Created on: 16 Dec 2019
 *      Author: zohar
 */

#ifndef TEXTER_H_
#define TEXTER_H_
#define LINE 256
#define WORD 30
#define LENGTH 250
extern char op;
extern char word[WORD];

int putword(char s[]);
int putline(char s[]);
int isEqual(char* str1, char* str2);
int substring(char* str1, char* str2);
void print_lines(char* str);
void print_similar_words(char* str);
int similar(char* s, char* t, int n);
#endif /* TEXTER_H_ */
