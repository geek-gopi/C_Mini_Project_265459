


#include "foo.h"

#include<stdio.h>
#include<stdlib.h>

 /**
 * @brief Line function is for graphic design of the program 
 *
 */

void line(){
        for(i=0;i<=acc;i++){
            printf("-");

        }    
}


 /**
 * @brief   Takes Input of Various Expenses and Input Data 
 *
 */

 
void input(){
        printf("Name :");
        gets(name);

        printf("\nMonth(example:January,February.....):");

        gets(month);

        printf("\nHow much did you spend on Food and groceries?:Rs");
        scanf("%f",&fnp);

        printf("\nHow much did you spend on phone And Internet ? : Rs");
        scanf("%f",&phone);

        printf("\nHow much did you spend on Entertainment ? :Rs");
        scanf("%f",&enter);

        printf("\nHow much did you spend on Transportation ? :Rs");
        scanf("%f",&car);

        printf("\nEnter your bill amount(i.e gas bill+ electricity bill+ water bills) ? :Rs");
        scanf("%f",&bills);

        printf("\nEnter Your Monthly Salary ? :Rs");
        scanf("%f",&allow);

        printf("\nHow much money did you made through your side buisness this month ? ");
        scanf("%f",&totalside);
       // printf("The Total side income is Rs% .2f",totalside);
        
       // printf("\n");

 }

 /**
 * @brief for calculation of providentfund
 *
 */

/* void providentfund(){  

    printf("Enter basic pay: ");
    scanf("%f",&basicPay);
     
    employeeFund=(basicPay/100)*EMPLOYEE_PERCENTAGE;
    employerFund=(basicPay/100)*EMPLOYER_PERCENTAGE;   
     
    
} */

/**
 * @brief  for calculation of totalamount i.e Deficit amount or Surplus Amount
 *
 */

 void calculate(){
     
        totalcredit=fnp+phone+enter+car+bills;
        totaldebit=allow+totalside;
        total_amount=totaldebit-totalcredit;
 }


/**
 * @brief 
 * 
 */

/* int books(int o )
 {
        for(j=0;j<=o-1;j++)
		{
            printf("\nHow much is book %d?:Rs",j+1);
            scanf("%f",&book[j]);
            totalbook +=book[j];
        
        }
         printf("\nThe total of %d book is Rs% .2f\n",n,totalbook);

 } */

/**
 * @brief  Display function for output
 *
 */


void display(){
    line();

    printf("\nCASHFLOW BUDGET\n");

    line();

    printf("\n");   

    printf("\t\t\t\tCredit\t\t\tDebit\n");

    printf("\nFood and Personal\t\tRs% .2f",fnp);
    printf("\nPhone and Internet\t\tRs% .2f",phone);
 //   printf("\n\nNumber of Book : %d",n);

  
        

        printf("\n\n");
        printf("Entertainment   \t\tRs% .2f" ,enter);
        printf("\nTransportation   \t\tRs% .2f" ,car);
        printf("\nMonthly Bills   \t\tRs% .2f",bills);

        printf("\n");

        printf("\n\nIncome through Side buisness\t\t\t\tRs% .2f",totalside);

        printf("\n\nYour Monthly Salary\t\t\t\t\tRs% .2f",allow);


        printf("\n\n");

        line();

        printf("\n");

        printf("Total(Credit and Debit)\t\tRs%.2f\t\tRs%.2f",totalcredit,totaldebit);
        printf("\n");

        printf("\nMonthly Surplus or Deficit \t\tRs%.2f",total_amount);


        printf("\n");
        printf("\n");
       // printf("Basic Pay: %f\n",basicPay);
      //  printf("Employee contribution: %f\n",employeeFund);
      //  printf("Employer Contribution: %f\n",employerFund);

        line();

}


/**
 * @brief  Final message if you are a smart budget planner or not this month
 *
 */
/*
void message(){
     if(totalcredit<totaldebit){
                printf("\n>>Congratualtions %s ,You are a smart budget planner this %s.<<",name,month);
            }
            else{
                printf("\n>> Sorry %s. ,    You are not good with your budget plan this %s.<<",name,month);
            }

} */
                          
