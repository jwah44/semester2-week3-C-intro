
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Joshua Momcilovic
 * ID: 201876926
 */

int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 36250;
   float NI = 0.08;
   float tax = 0.15;

   float NIcontrib;
   float taxcontrib;
   float takehome;
    // calculate the deductions and final take-home salary
   NIcontrib = salary*NI;
   taxcontrib = (salary - NIcontrib- 12500)*tax;
   takehome = salary - (NIcontrib + taxcontrib);
    // Use only these print statement with appropriate formatting and variable names
   printf("Salary £%.2f\n",salary);
   printf("NI contribution £%.2f\n",NIcontrib);
   printf("Tax contribution £%.2f\n",taxcontrib);
   printf("Take home salary £%.2f\n",takehome);

   return 0;
}