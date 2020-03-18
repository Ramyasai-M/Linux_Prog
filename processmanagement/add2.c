//File  Add2.c to be impoerted in execve.txt
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int sum=0;
	for(int i=0;i<=5;i++)
		sum+=i; //i=1+2+3+4+5
	printf("%d\n",sum);
	exit(1);
	return 0;
}
