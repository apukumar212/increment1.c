#include<stdio.h>
#include<stdlib.h>
int main()
{
int a=5,b=7,c;
system("");
c=a++ + b++ + ++a;
printf("a=%d,b=%d,c=%d",a,b,c);
getch();
}