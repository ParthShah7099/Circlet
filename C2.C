#include<stdio.h>
#include<conio.h>

/*

Develop a program that prints the given Floyd's triangle pattern using nested for loop.
11
12 13
14 15 16
17 18 19 20
*/

main()
{
	int i,j,num=11;
	clrscr();
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
	getch();

}