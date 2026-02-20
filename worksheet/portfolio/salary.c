
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Joshua Momcilovic
 * ID: 2018
 */

int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 40000;
   float NI = 0.5;
   float tax = 0.1;

   float NIcontrib;
   float taxcontrib;
   float takehome;
    // calculate the deductions and final take-home salary
   NIcontrib = salary*NI;
   taxcontrib = (salary - NIcontrib)*tax;
   takehome = salary - (NIcontrib + taxcontrib);
    // Use only these print statement with appropriate formatting and variable names
   printf("Salary £%.2f\n",salary);
   printf("NI contribution £%.2f\n",NIcontrib);
   printf("Tax contribution £%.2f\n",taxcontrib);
   printf("Take home salary £%.2f\n",takehome);

   return 0;
}