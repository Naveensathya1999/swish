#include<stdio.h>
#include<stdlib.h>
int main()
	{
		float x,p;
		int i,sum;
		printf("Enter the coffee amount and Discount percentage :");
		scanf("%f %f",&x,&p);
		sum=0;
	 		for(i=1;i<50;i++)
	 		{ 
				sum=(x/p*100);
	 		}
			 printf("The total cost for coffee to get free is %d",sum);
	 		 printf("\n");
			 return 0;
	 			
	}
