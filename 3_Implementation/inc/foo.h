#ifndef FOO_DOT_H    /* This is an "include guard" */
#define FOO_DOT_H    /* prevents the file from being included twice. */
#include <stddef.h>                    /* Including a header file twice causes all kinds */
                     /* of interesting problems.*/

/**
 * This is a function declaration.
 * It tells the compiler that the function exists somewhere.
 */

struct node
{
char data[20];
int sal;
int save;
struct node *next;
}*head=NULL;


void insertbeg(char*);
int calc(int);
void display();
#endif 
