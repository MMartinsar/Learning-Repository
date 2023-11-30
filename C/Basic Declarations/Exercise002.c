#include <stdio.h>

//Write a program to get the C version you are using.

int main(int argc, char** argv){

	#if __STDC_VERSION__ >= 201710L 
	printf("Using version C18\n");
	#elif __STDC_VERSION__ >= 201112L 
	printf("Using version C11\n");
	#elif __STDC_VERSION__ >= 199901L
	printf("Using version C99\n");
	#elif __STDC_VERSION__ >= 199409L
	printf("Using version C94\n");
	#else
	printf("Using version C89/C90");

	#endif
	return 0;
}
