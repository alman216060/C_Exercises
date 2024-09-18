#include <stdio.h>
#include <stdlib.h>
int** remcolm_2(int** matrix, int* row, int colm)
{
int count = 0;

for(int i = 0 ; i < *row ; ++i){

	for(int j = 0 ; j < colm ; ++j)
	{
		if(matrix[i][j] % 2 == 0){

				free(matrix[i]);
				matrix[i] = NULL;
				count++;
				break;
	
			}
	}

}





for(int i = 0 ; i < *row ; ++i){

	if(matrix[i] == NULL)
	{

			for(int j1 = i+1; j1 < *row ; j1++){
				
				if(matrix[j1] != NULL)
				{
					matrix[i] = matrix[j1];
					matrix[j1] = NULL;
					break;
				}
			}
		}
}
*row = *row-count;

return matrix;

}
