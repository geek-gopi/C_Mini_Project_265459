

#ifndef FOO_DOT_H    /* This is an "include guard" */
#define FOO_DOT_H    /* prevents the file from being included twice. */
                     /* Including a header file twice causes all kinds */
                     /* of interesting problems.*/

#define limit 10
#define acc 70 
#define EMPLOYEE_PERCENTAGE 12.5f
#define EMPLOYER_PERCENTAGE 12.0f

struct User
{
    char name[50];
    float salary;
}; 

float fnp;
float phone;
float enter;
float car;
float bills;
float allow;
//float side[limit];
float totalside;
int i,n;
//int totalsideInc(int u);
float totalcredit;
float totaldebit;
float total_amount;
char name[acc];
char month[acc];
//float basicPay;
//float employeeFund,employerFund;

void display();
void input();
void line();
//void message();
void calculate();
//void providentfund();

//int calculatesum(int totaldebit,int totalcredit);

//int providentfund2(int basicPay);


#endif
