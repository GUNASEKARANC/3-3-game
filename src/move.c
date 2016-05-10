#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int vaild(int rc[4])
{
        if((rc[0]==rc[2]) && (rc[1]!=rc[3])) //move only possiple in the same row or col
        {
                if(((rc[1]+1)==rc[3]) || ((rc[1]-1)==rc[3]))
                {
                        printf("vaild move\n");
			return 0;
                }
                else
                {
                        printf("invalid move\n");
			return 1;
                }
        }
        else if((rc[0]!=rc[2]) && (rc[1]==rc[3]))
        {
                if(((rc[0]+1)==rc[2]) || ((rc[0]-1)==rc[2]))
                {
                        printf("vaild move\n");
			return 0;
                }
                else
                {
                        printf("invalid move\n");
			return 1;
                }
        }
        else
        {
        	printf("invalid move\n");
		return 1;
        }

}
int move(int arr[3][3],int P)
{
        int rc[4];
        //printf("move\n");
        scanf("%d%d%d%d",&rc[0],&rc[1],&rc[2],&rc[3]);
        if ((vaild(rc)==0) && ((arr[rc[0]][rc[1]]==P) && (arr[rc[2]][rc[3]]==0)))
	{
		arr[rc[2]][rc[3]]=arr[rc[0]][rc[1]];
		arr[rc[0]][rc[1]]=0;
	}
	else
	{
		printf("not valid your chance elapsed\n");
	}
	
        return 0;
}
