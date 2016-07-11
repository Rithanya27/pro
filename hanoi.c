#include<stdio.h>
#include<conio.h>
void main()
{
void tow(int,int,int,int);
int disk=3;
clrscr();
printf("move to the disk");
tow(disk,1,3,2);
getch();
}
void tow(int c,int inti,int final,int t)
{
if(c>0)
{
tow(c-1,inti,t,final);
printf("new dis %d from %d to %d\n",c,inti,final);
tow(c-1,t,final,inti);
prinf("result")
}
}
