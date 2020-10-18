// Program to add two numbers
#include<stdio.h>
int add(int,int); //function declaration
int main()
{
int a=5,b=6;
printf("%d",add(a,b)); //function call
 return 0;
}
int add(int x,int y) //function defination
{
  return (x+y);
}
