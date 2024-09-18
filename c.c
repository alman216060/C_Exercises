#include <stdio.h>
#include "remcolm.c"
#include <stdlib.h>

int main()
{

int row = 3;
int colm = 2;

int ** matrix = (int**)malloc(row * sizeof(int*));

matrix[0] = (int*)malloc(colm * sizeof(int));
matrix[0][0] = 3;
matrix[0][1] = 55;

matrix[1] = (int*)malloc(colm * sizeof(int));
matrix[1][0] = 17;
matrix[1][1] = 7;

matrix[2] = (int*)malloc(colm * sizeof(int));
matrix[2][0] = 5;
matrix[2][1] = 1;

matrix = remcolm_2(matrix, &row, colm);



for(int i = 0 ; i < row ; ++i){

	for(int j = 0 ; j < colm ; ++j){

	printf("%d\n", matrix[i][j]);
	}

}

}
