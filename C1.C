#include<stdio.h>
#include<conio.h>

/*

Develop a program that prints the given right half triangle pattern using nested for loop.

41
41 42
41 42 43
41 42 43 44
41 42 43 44 45

*/
main()
{
	int i,j,num;
	clrscr();
	for(i=1; i<=5; i++)
	{
		num = 41;
		for(j=1 ; j<=i ; j++)
		{
			printf("%2d ",num);
			num++;
		}
		printf("\n");
	}
	getch();

}