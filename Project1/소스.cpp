



/* 
2 abc			3
3 DEF			4
4 GHI			5
5 JKL			6
6 MNO			7
7 PQRS			8
8 TUV			9
9 WXYZ			10





*/


#include<stdio.h>
#include <string.h>


int main(void) {

	char A[20];
	int num;
	int result = 0;


	fgets(A, sizeof(A), stdin); 						// 문자열 입력 받기

	for (int i = 0; i <= strlen(A); i++) {


		if (A[i] >= 'A' && A[i] <= 'C') result += 3;

		else if (A[i] >= 'D' && A[i] <= 'F') result += 4;

		else if (A[i] >= 'G' && A[i] <= 'I') result += 5;

		else if (A[i] >= 'J' && A[i] <= 'L') result += 6;

		else if (A[i] >= 'M' && A[i] <= 'O') result += 7;

		else if (A[i] >= 'P' && A[i] <= 'S') result += 8;

		else if (A[i] >= 'T' && A[i] <= 'V') result += 9;

		else if (A[i] >= 'W' && A[i] <= 'Z') result += 10;

	}

	printf("%d", result);

}