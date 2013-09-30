#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
#include "quicksort.h"
#include "unit.h"



int myquicksort(int *pArray, int iLen) {

	int L,R,P;
	int temp;

//	printf("***\n");
	if (iLen < 2) {
//		printf("iLen = %d\n",iLen);
		return (0);
	}

	L=0;
	R=iLen-1;
	P=iLen/2;

//	printf("Len= %d, L,P,R = %d/%d/%d\n",iLen,L,P,R);


	while(L<R) {
		while (pArray[L] < pArray[P]) {
//			printf("L+\n");
			L++;
		}
		while (pArray[R] > pArray[P]) {
//			printf("R-\n");
			R--;
		}

//		printf("L/R = %d/%d\n",L,R);
		temp = pArray[L];
		pArray[L++] = pArray[R];
		pArray[R--] = temp;
	}

//	myquicksort(pArray,L);
//	myquicksort(&pArray[L+1],iLen-L-1);

	myquicksort(pArray,R+1);
	myquicksort(&pArray[L],iLen-L);
    //quick_sort(a, r - a + 1);
    //quick_sort(l, a + n - l);	
	return(0);

}


int selfCheck(int *buf,int *ans,int len) {


	int i;
	for(i=0;i<len;i++) {
		if (ans[i] != buf[i]) {
			return (-1);
		}
	}
	return(0);
}


