#include <stdio.h>
int main(void)
{
	int l1, r1, l2, r2,result;
	scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
	if(r2>=r1)	
	{
		if(l2>=r1)
		{
			result=0;
		}
		else
		{
			if(l2>=l1)
			{
				result =r1-l2;
			}
			else
			{
				result=r1-l1;
			}
		}
	}
	else
	{
		if(l1>=r2)
		{
			result=0;
		}
		else
		{
			if(l1>=l2)
			{
				result=r2-l1;
			}
			else
			{
				result=r2-l2;
			}
		} 
	}
	printf("%d", result);
	return 0;
}
