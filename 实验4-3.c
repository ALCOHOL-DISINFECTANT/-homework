#include  <stdlib.h>
#include  <stdio.h>
#include  <time.h>
int main()
{
	int first,second,input,num,i,n,right;
	n=10;
	i=3;
	right=0;
	
	while(n>0)//答十题退出程序 
	{
		srand(time(NULL));
		first=rand()%10+1;
		second=rand()%10+1;//产生两个随机数 
		printf("%d * %d = ",first,second);
		scanf("%d",&input);
		num=first*second;
		if(input==num)
		{
			right++;
			printf("Right！\n");
		}
		else
			printf("Wrong!\n");	
		
		n--;
	}
	printf("\n你的得分是%d,正确率为%d%%",right*10,right*10);
	return 0;
}

