#ifndef _FUNCTION_H
#define _FUNCTION_H

#include <stdio.h>
#include <stdlib.h>

//KMP function
struct String{
	int size;
	char* string;
	char* targetstring;
	int* next;
};

void GetNext(char * p, int * next);
int KMP(char * t, char * p);
void Delte(int position,int length);
#endif
