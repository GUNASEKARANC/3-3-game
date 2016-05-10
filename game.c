#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int start(int arr[3][3]);
int print_matrix(int arr[3][3]);
int verify(int arr[3][3]);
int move(int arr[3][3],int P);

int input(int arr[3][3])
{
        int i=0,j;
        for(j=0;j<3;j++)
        {
               arr[i][j]=1;
        }
        

}


int main()
{
	static int arr[3][3],P=0;
	P=start(arr);
	//print_matrix(arr);
	//refresh(arr);
	//input(arr);
	print_matrix(arr);
	while(verify(arr)!=0)
	{	
		printf("player %d move:",P);
		move(arr,P);
		print_matrix(arr);
		if(P==1)
        	{
               		//printf("%d",P);          
			P=2;
        	}
        	else
        	{
                	//printf("%d",P);
			P=1;
		}
	}
	return 0;
}


