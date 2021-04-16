

#ifndef FOO_DOT_H    /* This is an "include guard" */
#define FOO_DOT_H    /* prevents the file from being included twice. */
                     /* Including a header file twice causes all kinds */
                     /* of interesting problems.*/


#define b 50 
#define limit 20
#define EMPLOYEE_PERCENTAGE 12.5f
#define EMPLOYER_PERCENTAGE 12.0f

struct User
{
    char name[50];
    float salary;
}; 

float food;
float sal;
float mobile;
float other;
float bike;
float opayment;
float multi;
int i,n;

float totalcredit;
float totaldebit;
float total_amount;
char name[b];
char month[b];

void display();
void input();
void dash();

void cal();



#endif
