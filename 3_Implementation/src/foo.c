#include"foo.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include <stddef.h>

int mi,savi; 

 /*struct node
{
char data[20];
int sal;
int save;
struct node *next;
}*head=NULL; */


void insertbeg(char name[])
{
int saving;
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("\n enter your monthly income");
scanf("%d",&mi);
saving=calc(savi);
strcpy(newnode->data,name);
newnode->sal=mi;
newnode->save=saving;
if(head==NULL)
{
newnode->next=NULL;
head=newnode;
}
else
{
newnode->next=head;
head=newnode;
}
printf("\n one node inserted");
}

void display()
{
if(head==NULL)
{
printf("\n listempty");
}
else
{
struct node *temp=head;
printf(" the details ");
while(temp->next!=NULL)
{
printf("%s \n %d \n %d \t",temp->data,temp->sal,temp->save);
temp=temp->next;
}
 printf("%s \n %d \n %d \t",temp->data,temp->sal,temp->save);
}
}
int calc(int savi)
{
int fexp,oexp,ai,oti;
 char val[10];
printf("\n enter your groceries expenses");
scanf("%d",&fexp);
printf("\n enter other expenses");
scanf("%d",&oexp);
printf("\n do you get any income from properties?(Y or N)");
scanf("%s",&val);
if(strcmp(val,"y")==0)
{
printf("\n enter your income from assets");
scanf("%d",&ai);
}
else
{
ai=0;
}
printf("enter your other income");
scanf("%d",&oti);
savi=mi+ai+oti-fexp-oexp;
printf("your monthly savings %d",savi);
return savi;
}


