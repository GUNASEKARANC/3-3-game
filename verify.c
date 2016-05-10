/*

Need to verfiy is Game over or not by verfiying the rows and cols and x check in the 3*3 matrix 
if any point of time game over means check funtions will return the player number
else it should go for the next move

*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int i,j,tmp,count=0;
int verify(int arr[3][3])
{
	int check=0;
	check=(row_check(arr)||col_check(arr)||X_check(arr));
	if (check !=  0){
		printf("@@@ CONGRATZ @@@\nplayer %d Won the Game %2c\n",check,1);
		return 0;
	}
	else{ 
		//printf("move");
		return 1;
	}
}
int row_check(int arr[3][3])
{	
	for(i=0;i<3;i++)
	{
		tmp=arr[i][0];
		for(j=0;j<3;j++)
        	{
        		if((arr[i][j]==tmp)&&(arr[i][j]!=0))
			{
				count++;
			}
			else
			{
				break;
			}
	        }
	        
		if(count == 3)
		{		
			printf("player:%d\n count: %d\n",tmp,count);
			return tmp;
		}
		else
		{
		count=0;
		}
	}
	return 0;
}
	
int col_check(int arr[3][3])
{
	for(j=0;j<3;j++)
        {
         	tmp=arr[0][j];       
                for(i=0;i<3;i++)
                {
                        if((arr[i][j]==tmp)&&(arr[i][j]!=0))
                        {
                                count++;
                        }
                        else
                        {
                        break;
                        }
                }
                if(count == 3)
		{		
			printf("player:%d\n count: %d\n",tmp,count);
			return tmp;
		}
		else
		{
		count=0;
		}

        }

	return 0;
}
int X_check(int arr[3][3])
{	
	for(i=0,j=0;(i<3)&&(j<3);i++,j++)
	{
		tmp=arr[0][0];
		if((arr[i][j]==tmp)&&(arr[i][j]!=0))
                {
        	        count++;
                }
                else
                {
                break;
                }

	}
	if(count == 3)
	{		
		printf("player:%d\n count: %d\n",tmp,count);
		return tmp;
	}
	else
	{
		count=0;
	}

	if(((arr[0][2]==arr[1][1])==arr[2][0])&&(arr[1][1]!=0))
	{
	count=3;
	}
	if(count == 3)
	{		
		printf("player:%d\n count: %d\n",tmp,count);
		return tmp;
	}
	else
	{
		return 0;
	}
}
