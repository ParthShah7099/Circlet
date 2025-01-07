#include<stdio.h>
#include<conio.h>

/*

Develop a program that prints the given Inverted left half triangle pattern using nested for loop.

10101
 1010
  101
   10
    1

*/

main()
{
	int i,j,s;
	clrscr();

	for(i=5; i>=1; i--)
	{
		for(s=i; s<5; s++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			if(j%2 == 0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
	getch();

}