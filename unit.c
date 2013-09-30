#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
#include "quicksort.h"
#include "unit.h"

/*
 * These are primative unit tests.
 */

int test_1(void) {
	int buf[] = {2,1};
	int ans[] = {1,2};
	int test_no = 1;
	int len;
	int iRC;

	len = sizeof(buf)/sizeof(int);
	printf("****   test %d ****   \n",test_no);
	printf("len = %d\n",len);
	
	dumpArray("before\t",buf,len);
	myquicksort(buf,len);
	dumpArray("after\t",buf,len);

	iRC = selfCheck(buf,ans,len);
	if (iRC) {
		printf("Fail test %d\n",test_no);
		return(1);
	} else {
		printf("Pass test %d\n",test_no);
	}
	

	return(0);
}

int test_2(void) {
	int buf[] = {2,1,3};
	int ans[] = {1,2,3};
	int test_no = 2;
	int len;
	int iRC;

	len = sizeof(buf)/sizeof(int);
	printf("****   test %d ****   \n",test_no);
	printf("len = %d\n",len);
	
	dumpArray("before\t",buf,len);
	myquicksort(buf,len);
	dumpArray("after\t",buf,len);

	iRC = selfCheck(buf,ans,len);
	if (iRC) {
		printf("Fail test %d\n",test_no);
		return(1);
	} else {
		printf("Pass test %d\n",test_no);
	}
	

	return(0);
}

int test_3(void) {
	int buf[] = {3,1,2};
	int ans[] = {1,2,3};
	int test_no = 3;
	int len;
	int iRC;

	len = sizeof(buf)/sizeof(int);
	printf("****   test %d ****   \n",test_no);
	printf("len = %d\n",len);
	
	dumpArray("before\t",buf,len);
	myquicksort(buf,len);
	dumpArray("after\t",buf,len);

	iRC = selfCheck(buf,ans,len);
	if (iRC) {
		printf("Fail test %d\n",test_no);
		return(1);
	} else {
		printf("Pass test %d\n",test_no);
	}
	

	return(0);
}

int test_4(void) {
	int buf[] = {2,1,1};
	int ans[] = {1,1,2};
	int test_no = 4;
	int len;
	int iRC;

	len = sizeof(buf)/sizeof(int);
	printf("****   test %d ****   \n",test_no);
	printf("len = %d\n",len);
	
	dumpArray("before\t",buf,len);
	myquicksort(buf,len);
	dumpArray("after\t",buf,len);

	iRC = selfCheck(buf,ans,len);
	if (iRC) {
		printf("Fail test %d\n",test_no);
		return(1);
	} else {
		printf("Pass test %d\n",test_no);
	}
	

	return(0);
}
int  test_5(void) {
	int buf[] = {4,3,2,1};
	int ans[] = {1,2,3,4};
	int test_no = 5;
	int len;
	int iRC;

	len = sizeof(buf)/sizeof(int);
	printf("****   test %d ****   \n",test_no);
	printf("len = %d\n",len);
	
	dumpArray("before\t",buf,len);
	myquicksort(buf,len);
	dumpArray("after\t",buf,len);

	iRC = selfCheck(buf,ans,len);
	if (iRC) {
		printf("Fail test %d\n",test_no);
		return(1);
	} else {
		printf("Pass test %d\n",test_no);
	}
	

	return(0);
}
int  test_6(void) {
	int buf[] = {4,5,3,6,3};
	int ans[] = {3,3,4,5,6};
	int test_no = 6;
	int len;
	int iRC;

	len = sizeof(buf)/sizeof(int);
	printf("****   test %d ****   \n",test_no);
	printf("len = %d\n",len);
	
	dumpArray("before\t",buf,len);
	myquicksort(buf,len);
	dumpArray("after\t",buf,len);

	iRC = selfCheck(buf,ans,len);
	if (iRC) {
		printf("Fail test %d\n",test_no);
		return(1);
	} else {
		printf("Pass test %d\n",test_no);
	}
	

	return(0);
}

int  test_7(void) {
	int buf[] = {1,2,3,1,2};
	int ans[] = {1,1,2,2,3};
	int test_no = 7;
	int len;
	int iRC;

	len = sizeof(buf)/sizeof(int);
	printf("****   test %d ****   \n",test_no);
	printf("len = %d\n",len);
	
	dumpArray("before\t",buf,len);
	myquicksort(buf,len);
	dumpArray("after\t",buf,len);

	iRC = selfCheck(buf,ans,len);
	if (iRC) {
		printf("Fail test %d\n",test_no);
		return(1);
	} else {
		printf("Pass test %d\n",test_no);
	}
	

	return(0);
}


int  test_8(void) {
	int buf[] = {1,2,3,2,1};
	int ans[] = {1,1,2,2,3};
	int test_no = 8;
	int len;
	int iRC;

	len = sizeof(buf)/sizeof(int);
	printf("****   test %d ****   \n",test_no);
	printf("len = %d\n",len);
	
	dumpArray("before\t",buf,len);
	myquicksort(buf,len);
	dumpArray("after\t",buf,len);

	iRC = selfCheck(buf,ans,len);
	if (iRC) {
		printf("Fail test %d\n",test_no);
		return(1);
	} else {
		printf("Pass test %d\n",test_no);
	}
	

	return(0);
}


int  test_9(void) {
	int buf[] = {0,2,0,0,0};
	int ans[] = {0,0,0,0,2};
	int test_no = 9;
	int len;
	int iRC;

	len = sizeof(buf)/sizeof(int);
	printf("****   test %d ****   \n",test_no);
	printf("len = %d\n",len);
	
	dumpArray("before\t",buf,len);
	myquicksort(buf,len);
	dumpArray("after\t",buf,len);

	iRC = selfCheck(buf,ans,len);
	if (iRC) {
		printf("Fail test %d\n",test_no);
		return(1);
	} else {
		printf("Pass test %d\n",test_no);
	}
	

	return(0);
}


int  test_10(void) {
	int buf[] = {0,0,2,0,0};
	int ans[] = {0,0,0,0,2};
	int test_no = 10;
	int len;
	int iRC;

	len = sizeof(buf)/sizeof(int);
	printf("****   test %d ****   \n",test_no);
	printf("len = %d\n",len);
	
	dumpArray("before\t",buf,len);
	myquicksort(buf,len);
	dumpArray("after\t",buf,len);

	iRC = selfCheck(buf,ans,len);
	if (iRC) {
		printf("Fail test %d\n",test_no);
		return(1);
	} else {
		printf("Pass test %d\n",test_no);
	}
	

	return(0);
}

