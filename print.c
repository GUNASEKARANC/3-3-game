#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int print_matrix(int arr[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {
                        printf("%d\t",arr[i][j]);
                }
        printf("\n\n");
	}
	return 0;
}
