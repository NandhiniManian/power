#include<stdio.h>
void main()
{
int n,e,r=1;
printf("enter the number and exponent:\n");
scanf("%d%d",&n,&e);
while(e!=0)
{
r=r*n;
--e;
}
printf("answer:%d",r);
}
