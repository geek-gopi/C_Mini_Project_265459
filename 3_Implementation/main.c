#include"foo.h"
#include <stdlib.h>
#include<stdio.h>
//#include"foo.h"


int main()
{
char name[20];
int choice;
while(1)
{
printf(" \n MENU \n 1.ins \n 2.display \n 3.exit \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter your name");
scanf("%s",name);
insertbeg(name);
break;
case 2:display();
break;
case 3:exit(0);
break;
default:printf("\n wrong input");
}
}
}
