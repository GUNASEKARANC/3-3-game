#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int print_matrix(int arr[3][3]);

int refresh(int arr[3][3])
{
	int i,j;
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {
                        arr[i][j]=0;
                }
        }

	return 0;
}

int toss()
{
        int toss=(random()%2)+1;
        return toss;
}

int start(int arr[3][3])
{
        int P=toss(),row,col,count=0;
        if(P != 0)
        {
                printf("player %d won the toss\n",P);
        }
	refresh(arr);
        while(count<6)
        {
        	printf("player %d,enter the row&col\n",P);
	        scanf("%d%d",&row,&col);
		if(arr[row][col]==0)
		{
        		if(P==1)
	        	{
	        	        //printf("%d",P);
				arr[row][col]=1;                
				P=2;
	        	}
	        	else
	        	{
	        	        //printf("%d",P);
				arr[row][col]=2;
	        	        P=1;
	        	}
			print_matrix(arr);
        		count++;
        	}
		else
		{
			printf("%d %d not empty\n",row,col);
		}
	}
        return P;
}                      
