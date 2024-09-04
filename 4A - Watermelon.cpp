//279799814	Sep/04/2024 22:19UTC+10	handupp27	4A - Watermelon	GNU C11	Accepted	124 ms	0 KB
#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d",&n);
	if (n % 2)//是否为偶数
	{
		printf("no");
	}
	else {//是偶数就继续
		if (n / 2 % 2)//子孩子不是双数
		{
			if((n/2)>1)//可能不是对半分，一个大一个小，除了2都能拼成一大一小，
				//比如6=2+4,10=2+8，这些除以2都大于1
			{
				printf("yes");
			}
			else {
			printf("no");
			}
		}
		else {//子孩子是双数
			printf("yes");
		}
	}
	return 0;

}
