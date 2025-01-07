#include<stdio.h>
#include<conio.h>

/*

Develop a program that prints the given custon alphabetic pattern using a nested for loop.


*****
*   *
*****
*
*


*/

main()
{
	int i;
	clrscr();
	for(i=1; i<=5; i++)
	{
		if(i==1 || i==3)
		{
			printf("* * * * *\n");
		}
		else if(i==4 || i==5)
		{
			printf("*\n");
		}
		else
		{
			printf("*       *\n");
		}

	}
	getch();
}