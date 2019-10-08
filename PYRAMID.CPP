#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n;
printf("enter the value of n:");
scanf("%d",&n);
for(i=0;i<=n;i++)
   {
     for(j=0;j<=i;j++)
	printf(" * ");
    printf("\n");
    }
getch();
}








