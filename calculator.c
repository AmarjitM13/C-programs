#include<stdio.h>
#include<conio.h>



int main()
{
int a,b,c;
float r1;
int flag=0;
char ch;
printf("Enter x to stop");
do
    {
printf("enter the two numbers : ");
scanf("%d%d",&a,&b);
printf("\n enter any +,-,*,/  ");
scanf(" %c",&ch);
if(ch=='+')
c=a+b;
else if (ch=='-')
c=a-b;
else if(ch=='*')
c=a*b;
else
    {
r1=(float)a/b;
flag=1;

    }
    if(flag==1)
printf("result is %f",r1);
    else
printf("result is %d",c);
    }    while(ch!='x');
    getch();
}

