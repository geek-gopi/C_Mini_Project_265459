
#include "foo.h"

#include<stdio.h>
#include<stdlib.h>


void dash(){
        for(i=0;i<=b;i++){
            printf("-");

        }    
}



 
void input(){
        printf("Please Enter Your Name");
        gets(name);
        
		printf("\nEnter Your Monthly Salary ? :Rs");
        scanf("%f",&sal);
        

        printf("\n Day/Month):");

        gets(month);

        printf("\nCash Spent on Eatting outside");
        scanf("%f",&food);
        

        printf("\nCash spent on Mobile phone");
        scanf("%f",&mobile);

        printf("\n Cash Spent on Outing  ");
        scanf("%f",&other);

        printf("\n Cash spent on travelling ");
        scanf("%f",&bike);
        
		printf("\n Other Expenses");
        scanf("%f",&opayment);

        
		printf("\n Multi-source of income ");
        scanf("%f",&multi);

      //  printf("\n Other Expenses");
       // scanf("%f",&opayment);

        

 }

 

 void cal(){
     
        totalcredit=food+mobile+other+bike+opayment;
        totaldebit=multi+sal;
        total_amount=totaldebit-totalcredit;
 }



void display()
{
    dash();

    printf("\nCASHFLOW ANALYSIS\n");

    dash();

    printf("\n");   

    printf("\t\tCASHOUT_FLOW\t\t CASHIN_FLOW\n");

    printf("\n Restaurants and Other Eating expense \t\tRs% .2f",food);
    printf("\nPhone and Internet\t\tRs% .2f",mobile);
  
        

        printf("\n\n");
        printf(" MOVIE AND OUTING   \t\tRs% .2f" ,other);
        printf("\n TRAVELLING   \t\tRs% .2f" ,bike);
        printf("\n OTHER EXPENSES \t\tRs% .2f",opayment);

        printf("\n");

        printf("\n\n MULTI SOURCE OF INCOME\t\t\t\tRs% .2f",multi);

        printf("\n\nYour Monthly Salary\t\t\t\t\tRs% .2f",sal);



        printf("\n \n \n");

        printf("Total(Credit and Debit)\t\tRs%.2f\t\tRs%.2f",totalcredit,totaldebit);
        printf("\n \n \n");

        printf("\nMonthly Surplus or Deficit \t\tRs%.2f",total_amount);


        printf("\n");
        printf("\n");
      
      
        dash();

    

}



                          
