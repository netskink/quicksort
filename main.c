#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
#include "quicksort.h"
#include "unit.h"



int main(int argc, char *argv[]) {

	int iRC;

	iRC=EXIT_SUCCESS;

	if (argc != 1) {
		fprintf(stderr, "Usage: %s\n", argv[0]);
		iRC=EXIT_FAILURE;
		exit(iRC);
	}


	if (test_1())exit(1);
	if (test_2())exit(1);
	if (test_3())exit(1);
	if (test_4())exit(1);
	if (test_5())exit(1);
	if (test_6())exit(1);
	if (test_7())exit(1);
	if (test_8())exit(1);
	if (test_9())exit(1);
	if (test_10())exit(1);
	
	exit(iRC);

}



void dumpArray(char* tag, int *buf,int len) {

	int i;
	printf("%s :",tag);
	for(i=0;i<len;i++) {
		printf("%d ",buf[i]);
	}
	printf("\n");

}
