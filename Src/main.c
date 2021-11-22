#include<stdio.h>

int main()
{
	int iRet = 0;
	do
	{
		 SchedulerShowMenu();
		 scanf_s("%d", &iRet);
	} while (iRet != 0);

	return 0;
}