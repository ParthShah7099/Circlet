#include<stdio.h>
#include<conio.h>

/*

Develop a program that prints the given left half triangle pattern using a nested for loop.

    5
   45
  345
 2345
12345
*/

main()
{
	int i,j,s;
	clrscr();

	for(i=5; i>=1; i--)
	{
		for(s=i ; s>1 ; s--)
		{
			printf(" ");
		}
		for(j=i; j<=5; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();

}