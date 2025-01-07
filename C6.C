#include<stdio.h>
#include<conio.h>

/*

Develop a program that prints the given custom numeric pattrn using a nested for loop.
1        1
12      21
123    321
1234  4321
1234554321

*/

main()
{
	int i,j,s;
	clrscr();
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		for(s=5; s>i; s--)
		{
			printf("  ");
		}
		for(j=i; j>=1; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();



}